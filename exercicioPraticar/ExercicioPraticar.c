#include <stdio.h>

int exercicio1() {
    int numero;
    printf("DIgite um numero ");
    scanf("%d", &numero);
    printf("Numero : %d\n", numero);
    return 0;
}

int exercicio2() {
    int numero1, numero2, numero3 = 0;
    printf("Digite 3 numeros\n");

    printf("Informe o valor 1: ");
    scanf("%d", &numero1);
    printf("Informe o valor 2: ");
    scanf("%d", &numero2);
    printf("Informe o valor 3: ");
    scanf("%d", &numero3);
    int soma = numero1 + numero2 + numero3;
    printf("Soma: %d\n", soma); //\n e para quebrar linha
    return 0;
}

int exercicio3() {
    int numero;

    printf("Digite o numero para saber o quadrado dele: ");
    scanf("%d", &numero);
    int quadrado = numero * numero;
    printf("O quadrado é : %d\n", quadrado);
    return 0;


}

int main() {
    exercicio1();
    exercicio2();
    exercicio3();
}