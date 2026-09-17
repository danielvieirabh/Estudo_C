#include <stdio.h>


//  Na linguagem C , nao existe o tipo de dado String
// "adadadadadad" = E uma String

// 's' = caracter : CHAR
int main() {
    char opcao;
    printf("Informe uma opção \n");
    printf("a - Saldo da conta. \n");
    printf("b - Extrato da conta. \n");
    printf("c - Limite da conta. \n");
    scanf("%c", &opcao);  //  "%c" = significa char

    if (opcao == '2') {
        printf("Seu saldo é... \n");
    }
    else if (opcao == 'b') {
        printf("Extrato da conta... \n");
    }
    else if (opcao == 'c') {
        printf("Seu limite é... \n");
    }
    else {
        printf("Opção desconhecida \n");
    }

    //Gerar uma tabela alfabeto
    for (int i = 97; i <= 122; i++) { // na tabela hask vai ate o 122
        printf("%c\n", i);
    }

    return 0;
}