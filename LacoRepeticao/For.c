#include <stdio.h>

// for , while , do...while
// para , enquanto , faca...enquanto
int main() {
    //variaveis:
    int numero, soma = 0; // tem que inicializar em 0 , para fazer o for , e a gente vai precisar fazer um calculo matematico

    for (int i = 0; i < 5; i++) { //digitar 5 numero e no final faz a soma deles , i = 0 < 5 = sim , continua ate para de ser menor que 5 (vai ate o 4 apenas)
        printf("Informe o número %d: ", i);
        scanf("%d", &numero);
        soma = soma + numero;
        //soma += numero;
    }

    //saida :
    printf("A soma é %d", soma);

    return 0;
}