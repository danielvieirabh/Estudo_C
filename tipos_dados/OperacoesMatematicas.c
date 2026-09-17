#include <stdio.h>


// elevar ao quadrado = x * x
// Modulo (resto da divisao de x por y) %
int main() {
    int num1, num2;
    float res;

    printf("Informe o num1: ");
    scanf("%d", &num1);
    printf("Informe o num2: ");
    scanf("%d", &num2);

    //soma
    res = num1 + num2;
    printf("A soma é %d \n", (int) res); // cas de resultado

    //subtracao
    res = num2 - num1;
    printf("A subtração é %d \n", (int) res);

    //Multiplicar
    res = num1 * num2;
    printf("A multiplicação é %d \n", (int) res);

    //Dividir
    res = (float) num1 / (float) num2; // fazendo um cast de tipo para o resultado ser em float
    printf("A divisão é %.1f \n", res);

    //Elevar ao quadrado
    res = num1 * num1;
    printf("A elevacao ao quadrado e %d \n", (int) res);

    //Modulo (Verificar se o num1 e par ou impar)
    if (num1 % 2 == 0) {
        printf("E par \n");
    }
    else {
        printf("É IMpar \n");
    }

    return 0;
}