#include <stdio.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[50];
    int countLinhas = 0;

    printf("Digite o nome do arquivo que quer ver o conteudo: ");
    // ou : fgets(nomeArquivo, 12, stdin); // no lugar de "scanf"
    scanf("%s", nomeArquivo);
    arquivo = fopen(nomeArquivo, "r");

    if (arquivo != NULL) { // se encontrar o arquivo na pasta ele retorna o do IF
        printf("Conteudo do arquivo: \n");
        //Maneira com FOR :
        for (char c = getc(arquivo); c != EOF; c = getc(arquivo)) { //EOF: End of File = fim do arquivo
            printf("%c", c); // pegar cada carcter do arquivo
            if (c == '\n') {
                countLinhas++;
            }
        }
        printf("\n O arquivo %s tem %d linhas", nomeArquivo,  countLinhas);
        fclose(arquivo);
    }
    else {
        printf("Não achei o arquivo");
    }

    return 0;
}