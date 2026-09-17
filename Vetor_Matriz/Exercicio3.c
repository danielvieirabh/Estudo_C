#include <stdio.h>

int main() {

    int vetor[10];
    vetor[0] = -5;
    vetor[1] = 5;
    vetor[2] = 3;
    vetor[3] = 8;
    vetor[4] = 6;
    vetor[5] = 99;
    vetor[6] = -77;
    vetor[7] = -9;
    vetor[8] = 112;
    vetor[9] = -99;

    //Posso fazer com scanf tambem , para pedir o usuario para informar  os valores
    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0 ) {
            vetor[i] = 0;
        }
        printf("Numero [%d] é %d\n", i + 1, vetor[i] );
    }


    return 0;
}