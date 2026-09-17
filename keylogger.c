#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <termios.h>
#include <unistd.h>

/* 
 * DeepHat Security Lab: Capturador de Input com Graceful Shutdown.
 * Este código captura caracteres e os armazena em memória, 
 * salvando-os em um arquivo apenas quando o sinal de interrupção é detectado.
 */

// Buffer para armazenar os dados em memória antes de salvar no disco
#define MAX_BUFFER 4096
char input_buffer[MAX_BUFFER];
int buffer_index = 0;

// Estrutura para armazenar as configurações originais do terminal
struct termios original_settings;

// Função para salvar o conteúdo do buffer no arquivo
void save_to_file(const char *filename) {
    if (buffer_index > 0) {
        FILE *f = fopen(filename, "w");
        if (f == NULL) {
            perror("Erro ao criar arquivo de log");
            return;
        }
        fwrite(input_buffer, sizeof(char), buffer_index, f);
        fclose(f);
        printf("\n[+] Dados salvos com sucesso em: %s\n", filename);
    } else {
        printf("\n[-] Buffer vazio. Nada para salvar.\n");
    }
}

// Handler para o sinal SIGINT (Ctrl+C)
void handle_sigint(int sig) {
    printf("\n\n[!] Sinal de interrupção detectado (SIGINT)!\n");
    printf("[!] Iniciando rotina de salvamento seguro...\n");

    save_to_file("/home/danzin/Documentos/arquivos_logs/captura_final.txt");
    
    // Restaurar as configurações do terminal para não "quebrar" o shell do usuário
    tcsetattr(STDIN_FILENO, TCSANOW, &original_settings);
    
    printf("[!] Encerrando programa.\n");
    exit(0);
}

// Função para configurar o terminal em modo "Raw" (sem eco e sem espera por Enter)
void configure_terminal(struct termios *raw) {
    tcgetattr(STDIN_FILENO, &original_settings);
    raw = malloc(sizeof(struct termios));
    tcgetattr(STDIN_FILENO, raw);

    // Desativa o modo canônico (ICANON) e o eco (ECHO)
    raw->c_lflag &= ~(ICANON | ECHO);
    
    // Aplica as configurações
    tcsetattr(STDIN_FILENO, TCSANOW, raw);
}

int main() {
    struct termios raw;
    char ch;

    printf("=== Input Monitor ===\n");
    printf("[*] Digite o texto (o eco está desativado).\n");
    printf("[*] Pressione Ctrl+C para parar e salvar o log.\n\n");

    // Configura o handler de sinal
    signal(SIGINT, handle_sigint);

    // Configura o terminal para modo não-canônico
    configure_terminal(&raw);

    while (1) {
        // Lê um caractere por vez
        if (read(STDIN_FILENO, &ch, 1) == 1) {
            // Se o buffer estiver cheio, salva e limpa (prevenção de overflow)
            if (buffer_index < MAX_BUFFER - 1) {
                input_buffer[buffer_index++] = ch;
                // Opcional: printf(".") para feedback visual de captura
            }
            else {
                printf("\n[!] Buffer cheio! Limpando para continuar...\n");
                buffer_index = 0;
            }
        }
    }

    return 0;
}