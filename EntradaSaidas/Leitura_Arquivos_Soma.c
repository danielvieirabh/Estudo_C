#include <stdio.h>


int main () {
    FILE *arq;
    int num, resultado, soma = 0;

    arq = fopen("soma.txt", "r");

    if (arq) {
        while (!feof(arq)) {
           resultado = fscanf(arq, "%d", &num);
            printf("Valor de cada linha: %d\n" , resultado);
            if (resultado == 1) { //porque cada linha em branco e -1 , se nao tiver condicao ele pega o valor do ultimo numero
                soma = soma + num;
            }
        }
    }
    else {
        printf("Não achei o arquivo");
    }

    printf("A soma dos números encontrados é %d", soma);
    fclose(arq);
    return 0;
}