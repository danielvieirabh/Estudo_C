//Aula sobre variaveis
#include <stdio.h>

int main() {
   int idade;
   printf("Qual e a sua idade? ");
   //Receber dados:
   scanf("%d", &idade); // O tipo especificado de inteiro e = "%d"

   printf("A sua idade e %d", idade); // entrada de %d
}

// // --- NÚMEROS INTEIROS ---
// int inteiro = -42;
// unsigned int sem_sinal = 150;
// long int longo = 1234567890L;
// short int curto = 32000;
//
// printf("--- INTEIROS ---\n");
// printf("Inteiro com sinal (%%d): %d\n", inteiro);         // Exibe int padrão
// printf("Inteiro com sinal (%%i): %i\n", inteiro);         // Equivalente ao %d no printf
// printf("Inteiro sem sinal (%%u): %u\n", sem_sinal);       // Apenas valores positivos
// printf("Inteiro longo (%%ld): %ld\n", longo);             // Para valores maiores que o int comum
// printf("Inteiro curto (%%hd): %hd\n\n", curto);           // Economiza memória para valores pequenos
//
// // --- NÚMEROS REAIS (PONTO FLUTUANTE) ---
// float pi = 3.14159f;
// double preciso = 987654.321098;
//
// printf("--- REAIS ---\n");
// printf("Float padrao (%%f): %f\n", pi);                  // Exibe 6 casas decimais por padrão
// printf("Float com 2 casas (%%.2f): %.2f\n", pi);         // Limita a exibição a duas casas
// printf("Double (%%lf): %lf\n", preciso);                  // Maior precisão de casas decimais
// printf("Cientifica (%%e): %e\n", preciso);               // Formato de notação científica
// printf("Formato curto (%%g): %g\n\n", preciso);           // Escolhe o menor tamanho entre %f e %e
//
// // --- CARACTERES E TEXTO ---
// char letra = 'A';
// char texto[] = "Linguagem C";
//
// printf("--- TEXTO ---\n");
// printf("Um caractere (%%c): %c\n", letra);                // Exibe apenas uma letra/símbolo
// printf("Texto / String (%%s): %s\n\n", texto);            // Exibe uma frase ou palavra completa