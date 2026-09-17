#include <stdio.h>
// Utilizado quando precisa de um loop ,
// onde nao se tenha um numero fixo de elementos ,
// mas que teanha um criterio de parada e antes de inciar o loop a condicao e checada
int main() {
    int numero, soma = 0;

    printf("Informe o número: ");
    scanf("%d", &numero); //so vai entrar no loop , quando o numero for diferente de 0

    while (numero != 0) { //Enquanto o numero for diferente de 0 ele nao para o laço while
        soma = soma + numero;
        printf("Informe o número: ");
        scanf("%d", &numero);
    }

    //saida :
    printf("A soma é %d", soma);

    return 0;
}
