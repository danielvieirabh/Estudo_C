#include <stdio.h>

int main() {
    FILE *arq_file; //variavel e um ponteiro que aponta para um arquivo

    //Fopen = recebe dois parametros (nome do arquivo , forma de abertura do arquivo)
    // w - abrir o arquivo para escrita (se o arquivo já existir , será sobrescrito com um novo zerado)
    // r- abrir o arquivo para leitura (não podemos escrever no arquivo)
    //wa - abrir o arquivo para adição de conteúdo (se o arquivo ja existir , o conteúdo sera adcionando nas linhas abaixo)
    arq_file = fopen("arquivo.txt", "w");

    // sempre que finalizar a manipulaçãoo de um arquivo , devemos fechá-lo
    fclose(arq_file);
    return 0;
}