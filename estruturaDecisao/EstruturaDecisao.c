#include <stdio.h>

int main() {
    //Declaracao de variaveis
    int idade;

    //ENtrada
    printf("Qual e a sua idade?");
    scanf("%d", &idade);

    //Processamento
    if (idade < 18) {
        printf("Você e menor de idade. \n");
    }
    else if (idade > 18 && idade < 60) {
        printf("Você e adulto. \n");
    }
    else {
        printf("Você e idoso. \n");
    }

    //Saída
    printf("Sua idade e %d", idade); //vai imrpimir sempre

    return 0;
}