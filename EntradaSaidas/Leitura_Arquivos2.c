#include <stdio.h>


int main() {
    FILE *arq;
    char nome[10], *resultado;
    arq = fopen("arquivo.txt", "r");

    if (arq) { //Pegando o texto contido na linha inteira
        while (!feof(arq)) { //feof - File End Of File
           resultado = fgets(nome, 10 , arq); //pegar os 10 primeiros caracteres  por linha
            if (resultado) { // se o resultado for positivo para nao imprimir nada em branco
                printf("%s", nome);
            }
        }
    }
    else {
        printf("Não achei o arquivo!!");
    }
    fclose(arq);
    return 0;

}