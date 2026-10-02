#include <stdio.h>

int main() {
    int valores[5] = {1,2,3,4,5}; /// na me memoria vai ficar no slot : 0 , 1 , 2, 3 , 4
    // um valor inteiro tem 4 bytes , isso e padrao para esses nuemros5

    for (int i = 0; i < 5; i++) {
        printf("O valor %d tem %ld bytes\n", valores[i], sizeof(valores[i]));
    }

    printf("O array valores possui %ld bytes\n", sizeof(valores)); // 5 elementos do array * 4 bytes

    printf("Valores[0] vale %d e o endereço de memória é %p\n", valores[0], valores[0]);

    printf("*(valores) vale %d e endereço de memoria é %p\n", *(valores), *(valores));

    printf("*(valores + 1) vale %d e endereço de memória é %p\n", *(valores + 1), *(valores + 1)); // pula mais opcao , pois o segundo valor e o 2 ai ele avanca mais um

    printf("*(valores + 2) vale %d e endereço de memória é %p\n", *(valores + 2), *(valores + 2));

    printf("*(valores + 4) vale %d e endereço de memória é %p\n", *(valores + 4), *(valores + 4)); // vai para o 5 , pois o 5 esta na posicao 0 zero

    return 0;
}