#include <stdio.h>


int main() {
    int numero = 0;
    int maior = 0;
    int menor = 0;

    for (int i = 0; i < 10; i++) {
        printf("Informe o numero %d: ", i ++); //para ir de 1 a 10
        scanf("%d", &numero);
        if (i == 0) { // o primeiro loop numero sempre vai receber o valor de maior ou menor
            maior = numero;
            menor = numero;
        }
        if (numero > maior) { // se o numero for maior que o numero que esta na variavel maior da condicao la de cima
            // Se o numero que ele digitar e o maior ele print nele
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }
    printf("Maior valor lido: %d\n", maior);
    printf("Menor valor lido: %d\n", menor);


    return 0;
}
