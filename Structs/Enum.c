#include <stdio.h>

//Enum -> Enumeração

enum dias_da_semana {
    segunda, // Esta na posicao 0
    terca,
    quarta,
    quinta,
    sexta,
    sabado,
    domingo
};

int main() {
    enum dias_da_semana dia1, dia2; //duas variaveis desse tipo

    // vai falar que sao iguais
    dia1 = 2;
    dia2 = quarta;
    if (dia1 == dia2) {
        printf("Os dias são iguais \n");
    }
    else {
        printf("Os dias não são iguais \n");
    }



    return 0;
}