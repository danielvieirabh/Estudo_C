#include  <stdio.h>

//Vetores parte 1
// array uni-dimensional
// char nome[50] -> vetores
int main() {
    //vetores e string
    char nome[50];
    printf("Qual e seu nome? ");
    scanf("%s", &nome);
    printf("Olá %s \n", nome);

    //trabalhar com char tanto com numeros quanto letras
    char letras[26]; // vetores e caracteres
    int contador = 0;
    for (int i = 97; i <= 122; i++) { //gerar alfabeto
        letras[contador] = i;
        contador = contador + 1; // incrementa mais um sempre
    }
    //imprimindo as letras e seus valores em decimal
    for (int i = 0; i < 26; i++ ) {
        printf("%d == %c \n", letras[i], letras[i]); // um no formato de numero e outro no formato de carcterer
    }

    ///////////////////////////----------------------------------------------///////////////////////////////////

    // vetores de inteiros
    int numeros[10]; // primeiro elemento e o 0 e o ultimo e o 9
    // preencher manualmente
    numeros[0] = 1; // posiçao 0 vira 1
    numeros[1] = 3;
    numeros[2] = 5;
    numeros[3] = 7;
    numeros[4] = 9;

    // vetores e reais
    float valores[5]; // valores vai imprimir apenas 5 numeros
    for (int i = 0; i < 5; i++) {
        valores[i] = (float) numeros[i] / 2; // faz a divisao de numeros / 2 e imprime na ordem : numeros[0] = 1 / 2
    }
    for (int i = 0; i < 5; i++) { //imprimir ao contrario
        printf("%.2f\n", valores[i]);
    }

    return 0;
}