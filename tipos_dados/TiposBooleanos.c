#include <stdio.h>

//Mas a linguagem C , reconhece o valor 0 como falso , qualquer valor diferente de zero como Verdadeiro
int main() {
    bool novo = true; // 1
    int boolean = 1; // antigo

    if (boolean) { // V + V = V  |  V + F  = F | F + F = V  | F + V = F
        printf("Verdadeiro");
    }
    else {
        printf("Falso");
    }

    return 0;
}