#include <stdio.h>

// Tipos de dados  -> Tipos Númericos : Inteiros, Reais
int main() {
    int numero_inteiro = 5;
    double numero_real = 5.0;
    float media = 23.4;

    // %d = inteiros / %f = float / %lf = double
    float nota1;
    double nota2;
    printf("Qual a primeira nota? ");
    scanf("%f", &nota1);
    printf("Qual a segunda nota?");
    scanf("%lf", &nota2);

    float media_sum = (nota1 + nota2) / 2; //() para fazer a soma primeiro
    printf("Sua média é %.2f", media_sum); //  %.2 = depois do . coloque 2 casas decimais

    return 0;
}