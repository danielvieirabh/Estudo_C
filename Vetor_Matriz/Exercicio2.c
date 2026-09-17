#include <stdio.h>


int main() {
    int vetor[10];
    int contador = 0;
    int soma = 0;
    for (int i = 0; i < 10; i++) {
        vetor[i] = contador++;
        if (vetor[i] % 2 == 0) {
            printf("Numero %d é par \n", i);
            soma = soma + vetor[i];
        }
    }
    printf("Soma dos valores: %d" , soma);

    return 0;
}