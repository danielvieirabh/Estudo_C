#include <stdio.h>

int main() { // Calculo de numeros binarios
    int valor = 2;
    printf("Valor vale %d\n", valor);
    //Deslocamento de bits para esquerda
    valor = valor << 2;
    printf("Valor vale %d\n", valor);

    //Deslocamento de bits para direita
    valor = 2; //voltando o valor para 2
    valor = valor >> 1;
    printf("Valor vale %d\n", valor);

    //Deslocamento de bits NEgação
    valor = 2;
    valor = ~valor;
    printf("Valor vale %d\n", valor);
}
