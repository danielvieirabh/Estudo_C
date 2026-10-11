#include <stdio.h>
#include <string.h>

union pessoa { //A unio separa e utiliza apenas o espaco da maior variavel
    char nome[100];
    int idade;
}; //pode declarar a variavel aqui tambem

int main() {
    // int numero = 42; //sizeof
    // float nota = 7.9;
    // char letra = 'd';
    // double outraNota = 19.4;
    //
    // printf("A variavel 'numero' tem valor %d e ocupa %ld bytes em memória\n", numero, sizeof(numero));  // ld = long integer
    // printf("A variavel 'nota' tem valor %.2f e ocupa %ld bytes em memória\n", nota, sizeof(nota));
    // printf("A variavel 'letra' tem valor %c e ocupa %ld bytes em memória\n", letra, sizeof(letra));
    // printf("A variavel 'outraNota' tem valor %.2f e ocupa %ld bytes em memória\n", outraNota, sizeof(outraNota));

    union pessoa pessoa1;
    strcpy(pessoa1.nome, "Angela silva"); // funcao que posso declarar para a variavel / copiando essa string para essa variavel
    printf("Nome da pessoa: %s\n", pessoa1.nome); // tem que imprimir aqui ce nao vai sobrescrever na outra variavel
    pessoa1.idade = 39;
    printf("Idade da pessoa: %d\n", pessoa1.idade);

    printf("A variavel 'pes' esta ocupando %ld bytes em memoria.", sizeof(pessoa1));


    return 0;
}