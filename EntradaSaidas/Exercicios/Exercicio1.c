#include <stdio.h>

int main() {
    FILE *arquivo;
    char caracteres = 'A';

    arquivo = fopen("arq.txt", "w");

    if (arquivo) {
        while (caracteres != '0') {
            printf("Escreva algo, ou 0 para sair: ");
            scanf(" %c", &caracteres); // colocar um espaço aqui antes do c

            if (caracteres != '0') {
                fputc(caracteres,arquivo);
            }
        }
        fclose(arquivo);
    }
    else {
        printf("Não encontrado!");
    }


    return 0;
}