#include  <stdio.h>

int main() {

    // 2 maneiras
    int vetor[6] = {1, 0, 5, -2, -5, 7};

    // vetor[0] = 1;
    // vetor[1] = 0;
    // vetor[2] = 5;
    // vetor[3] = -2;
    // vetor[4] = -5;
    // vetor[5] = 7;

    int somaVetor = vetor[0] + vetor[1] + vetor[5];
    printf("O VALOR da soma desses vetores e %d\n" ,somaVetor);

    vetor[4] = 100;

    for (int i = 0; i < 6; i++) {
        printf("Numeros vetor A: [%d] vale  %d\n", i, vetor[i]);
    }

    return 0;
}