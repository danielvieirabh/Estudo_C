#include <stdio.h>

int main() {
    //Declaracao de uma string em C
    char nome[50]; // um array do tipo CHAR que suporta 49 caracteres , se passar caracteres da erro
    printf("Qual e seu nome? ");
    scanf("%s" ,nome);
    printf("Seu nome é %s", nome);
}