#include <stdio.h>


union numeros {
    int num1, num2, num3, num4, num5;
} numero;

int main() {
    int soma = 0;

    //Tem que printar um de cada vez
    numero.num1 = 1;
    soma = soma + numero.num1;
    printf("O valor de Num1 e %d\n", numero.num1);
    numero.num2 = 3;
    soma = soma + numero.num2;
    printf("O valor de Num2 e %d\n", numero.num2);
    numero.num3 = 5;
    soma = soma + numero.num3;
    printf("O valor de Num3 e %d\n", numero.num3);
    numero.num4 = 7;
    soma = soma + numero.num4;
    printf("O valor de Num4 e %d\n", numero.num4);
    numero.num5 = 9;
    soma = soma + numero.num5;
    printf("O valor de Num5 e %d\n", numero.num5);

    //Se colocar tudo depois , todas as variaveis vai para o mesmo valor
    // printf("O valor de Num1 e %d\n", numero.num1);
    // printf("O valor de Num2 e %d\n", numero.num2);
    // printf("O valor de Num3 e %d\n", numero.num3);
    // printf("O valor de Num4 e %d\n", numero.num4);
    // printf("O valor de Num5 e %d\n", numero.num5);

    printf("'n' esta ocupando %ld bytes em memoria\n", sizeof(numero));
    printf("Soma = %d\n", soma);
    printf("Memoria total ocupada: %ld\n", sizeof(numero) + sizeof(soma));


    return 0;
}