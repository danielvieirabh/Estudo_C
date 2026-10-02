#include <stdio.h>

int main () {
    int valor_inteiro = 1;
    float valor_float = 1.1;
    char valor_char = 'a';

    int* ponteiro_inteiro;
    float* ponteiro_real;
    char* ponteiro_char;

    printf("Valor inteiro Antes de incrementar: %d\n", valor_inteiro);
    printf("Valor Float Antes de incrementar: %f\n", valor_float);
    printf("Valor Chat Antes de incrementar: %d ou %c\n", valor_char, valor_char);

    ponteiro_inteiro = &valor_inteiro;
    ponteiro_real = &valor_float;
    ponteiro_char = &valor_char;

    printf("Valor inteiro depois de incrementar: %d\n", valor_inteiro);
    printf("Valor Float depois de incrementar: %f\n", valor_float);
    printf("Valor Chat Antes de incrementar: %d ou %c\n", valor_char, valor_char);


    printf("-------------------EXEMPLO DE ENDEREÇO DE MEMEORIA:--------------------------\n");
    printf("Endereço de memoria: %p ou %c\n", ponteiro_char, ponteiro_char);

}