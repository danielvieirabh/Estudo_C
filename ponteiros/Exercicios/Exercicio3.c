#include <stdio.h>

int main() {
    int array[5];
    int soma = 0;
    int soma2 = 0;
    int* ponteiros;


    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d de 5: ", i + 1);
        scanf("%d", &array[i]);

        // o dobro era para multiplicar por 2
        ponteiros = &array[i];
        soma = array[i] * array[i];
        soma2 = (*ponteiros) * (*ponteiros);
        printf("O dobro do valor %d digitado, de forma normal e %d\n", i+1, soma);
        printf("O dobro do valor %d digitado, em ponteiros e %d\n", i+1, soma2);
    }


    // // ou assim : a impressao
    // for (int i = 0; i < 5; i++) {
    //     ponteiros = &array[i];
    //     soma = array[i] * array[i];
    //     soma2 = (*ponteiros) * (*ponteiros);
    //     printf("O dobro do valor %d digitado, de forma normal e %d\n", i+1, soma);
    //     printf("O dobro do valor %d digitado, em ponteiros e %d\n", i+1, soma2);
    // }



    return 0;
}