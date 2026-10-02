#include <stdio.h>

//o ponteiro e o *
int main() {
    int n; //variavel que guarda seu valor na memória
    int* p; //ponteiro e um valor que aponta para um endereço de memória

    printf("Informe um numero: ");
    scanf("%d", &n);

    // inicializando o ponteiro
    p = &n;

    printf("O número informado foi: %d\n", n);

    printf("Endereço de memória: %p\n", &n);

    printf("Endereço do ponteiro: %p\n", p);
    return 0;
}