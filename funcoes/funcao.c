#include <stdio.h>

//Estrutura das funcoes:
// tem um tipo de retorno , menos void
void mensagem() {
    printf("Bem-vindo! \n");
}

int soma(int num1, int num2) {
    return num1 + num2;
}

void proximo_char(char caractere) {
    printf("%c", caractere + 1);
}

int main() { // funcao principal da linguagem C
    printf("Olá...\n");
    mensagem();
    int retorno = soma(4, 6);
    printf("Retorno = %d \n",retorno);

   proximo_char('a'); // vai virar b , porque e mais 1 de acordo com a tabela asc
    return 0;
}