#include <stdio.h>

// todos devem ficar no mesmo endereco de memoria com poneitors
void incrementa(int* contador) { // nao recebe valor inteiro mais sim um endereço de memoria que aponta para um valor inteiro
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", (*contador));
    printf("O endereço de memoria e %d\n", contador); // valor muda de acordo com a variavel

    printf("Depois de incrementar. \n");
  //  valor++; // o certo e colocar aqui primeiro
    // Ou fazer isso :
    printf("O contador vale %d\n", ++(*contador));
    printf("O endereço de memoria e %d\n", contador); // valor muda de acordo com a variavel
}

int main() { // em baixo passa o endereco de memoria
    int contador = 10;
    printf("Antes de incrementar. \n");
    printf("O contador vale %d\n", contador);
    printf("O endereço de memoria e %d\n", &contador); // valor muda de acordo com a variavel

    incrementa(&contador); // imprime todos aqui da funcao e depois vai para o da linha de baixo

    printf("Depois de incrementar. \n");
    printf("O contador vale %d\n", contador);
    printf("O endereço de memoria e %d\n", &contador); // valor muda de acordo com a variavel

    return 0;
}