#include <stdio.h>

int main() {
    FILE *arq;
    char fruta[10];

    arq = fopen("frutas.txt","a");  // a : append ->  se ja existir arquivo com escritas , ele adiciona a palavra que eu digitar no arquivo, se nao existir ele cria tambem

    if (arq) {
        //consegui criar o arquivo ?
        printf("Informe uma fruta, ou 0 para sair: \n");
        fgets(fruta, 10, stdin); // stdin = stardard input -> entrada padrão = o teclado
        while (fruta[0] != '0') { // saber se a fruta informada for diferente de zero
            fputs(fruta, arq);
            printf("Informe uma fruta, ou 0 para sair: \n");
            fgets(fruta, 10, stdin);
        }
    }
    else {
        printf("Não foi possivel criar o arquivo");
    }
    fclose(arq);
    return 0;
}