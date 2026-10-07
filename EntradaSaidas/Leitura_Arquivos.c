#include  <stdio.h>

int main() {
    FILE *arq;
    char c;
    arq = fopen("arquivo.txt", "r"); //r = leitura de arquivos

    if (arq) { // se encontrar o arquivo na pasta ele retorna o do IF
        printf("Conteudo do arquivo: \n");
        while ((c = getc(arq)) != EOF) { //EOF: End of File = fim do arquivo
            printf("%c", c); // pegar cada carcter do arquivo
        }
    }
    else {
        printf("Não achei o arquivo");
    }
    return 0;
}