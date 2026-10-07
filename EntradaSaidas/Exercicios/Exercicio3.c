#include <stdio.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[50];
    char c;
    char busca;
    int contador = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);
    printf("Digite algum caracter que voce quer ver no conteudo: ");
    scanf(" %c", &busca);
    arquivo = fopen(nomeArquivo, "r"); // r = somente leitura

    if (arquivo != NULL) { // se encontrar o arquivo na pasta ele retorna o do IF
        printf("Conteudo do arquivo que tem a letra '%'c': ", busca);
        while ((c = getc(arquivo)) != EOF) { //EOF: End of File = fim do arquivo
            printf("%c", c); // pegar cada carcter do arquivo
            if (c == busca) {
                contador++;
            }
        }
        printf("O caracterer '%c' aparece %d vez(es)", busca, contador);
        fclose(arquivo);
    }
    else {
        printf("Não achei o arquivo");
    }

    return 0;
}