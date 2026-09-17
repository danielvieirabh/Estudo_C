#include <stdio.h>
//Usamos o switch em casos onde vamos ter uma estrutra grande ou confusa de if/else

int main() {
    int valor = 0;

    printf("Digite um valor de 1 a 7: ");
    scanf("%d" , &valor);

    switch (valor) { //Se nao colocar break em algum ele imprime 2 valores seguidos ate onde tem o break
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda\n");
            break;
        case 3:
            printf("Terça\n");
            break;
        case 4:
            printf("Quarta\n");
            break;
        case 5:
            printf("Quinta\n");
            break;
        case 6:
            printf("Sexta\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Valor inválido!\n");
    }

    printf("Valor escolhido %d", valor);

    return 0;
}