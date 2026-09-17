#include <stdio.h>

int main() {
    int numero , soma = 0;

    //Executa primeiro e depois checa
    do {
        printf("Informe o número: ");
        scanf("%d", &numero);
        soma = soma + numero;
    }
    while (numero != 0);


    //saida :
    printf("A soma é %d", soma);


    return 0;
}