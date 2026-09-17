#include <stdio.h>


int main() {
    int vetor[10];
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        printf("Informe o valor %d de 10: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            printf("Numero %d é par \n", vetor[i]);
            soma = soma + vetor[i];
        }
        else {
            printf("Numero %d é impar \n", vetor[i]);
        }
    }

    printf("Soma dos valores: %d" , soma);

    return 0;
}