#include <stdio.h>
int main() {
    int num1;
    int num2;

    int* ponteiro1;
    int* ponteiro2;

    printf("Digite o Numero 1: ");
    scanf("%d", &num1);
    printf("Digite o Numero 2: ");
    scanf("%d", &num2);

    ponteiro1 = &num1;
    ponteiro2 = &num2;

    printf("Endereço de memória ponteiro1: %p\n", ponteiro1); //valor hexadecimal
    printf("Endereço de memória ponteiro2: %p\n", ponteiro2); //valor hexadecimal

    if (ponteiro1 > ponteiro2) {
        printf("O maior endereço é  Ponteiro1: %d, E o normal é %d", ponteiro1, num1);
    }
    else {
        printf("O maior endereço é Ponteiro2: %d, E o normal é %d", ponteiro2, num2);
    }

    return 0;
}