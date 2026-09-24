#include <stdio.h>

// * Assinatura das funoces
// - tipo de retorno
// - nome
// - parametros de entrada

int soma(int num1, int num2) {
    return num1 + num2;
}

void mensagem();

int main() {
    int n1 , n2;

    printf("Informe o numero 1: ");
    scanf("%d", &n1);

    printf("Informe o numero 2 : ");
    scanf("%d", &n2);

    int resposta =  soma(n1, n2);

    printf("A soma de %d com %d é %d\n", n1, n2 , resposta);
    mensagem();
    return 0;
}


void mensagem() {
    printf("Bem vindo");
}