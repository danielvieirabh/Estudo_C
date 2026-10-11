#include <stdio.h>

struct pessoa {
    char nome[20];
    int idade;
    char endereco[100];
};


int main() {
    struct pessoa humano;

    printf("Informe seu nome: ");
    fgets(humano.nome, 20, stdin);
    printf("Informe seu endereco (ESTADO): ");
    fgets(humano.endereco, 100, stdin);
    printf("Informe sua idade: ");
    scanf(" %d", &humano.idade);


    printf("Seu nome e: %s" , humano.nome);
    printf("Sua idade e: %d\n" , humano.idade);
    printf("Seu endereco e: %s\n" , humano.endereco);

    return 0;
}