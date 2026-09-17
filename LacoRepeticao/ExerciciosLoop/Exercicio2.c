#include <stdio.h>


int main() {
    for (int i = 0; i <= 100000; i = i + 100) { //imprime de 100 em 100 ate 100000
        printf("Valor: %d\n", i);
    }

    return 0;
}