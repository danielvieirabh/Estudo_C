#include <stdio.h>

int main() {
    int valores[5];


    for (int i =0; i < 5; i++) {
        printf("Informe o %d/5 valor: ", (i+1));
        scanf("%d", &valores[i]);
    }

    printf("Os valores informados foram: \n");
    for (int i =0; i < 5; i++) {
        printf("Valor %d: %d\n", i + 1, valores[i]);
    }

    printf("%p | %d\n", &valores[0], valores[0]); // procurar o valor deciml nessa posicao 0
    printf("%p | %d\n", valores, valores[0]);
    return 0;
}