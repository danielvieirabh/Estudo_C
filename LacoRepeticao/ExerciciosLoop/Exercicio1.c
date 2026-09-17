#include <stdio.h>

int main() {
    int numero = 0;
    int multiplo = 3;

    for (int i = 1; i < 5; i++) {
        numero = multiplo * i;
        printf("Numeros multiplos de %d: %d\n", i , numero);
    }
    return 0;
}