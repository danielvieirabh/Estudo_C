#include  <stdio.h>

//Matriz parte 1
// array multi-dimensional
// char nome[3][50] -> matrizes {Colocar 3 nomes com 50 caracteres}

// array multidimensional :
// int numeros[5][5] Linhas e colunas: [linhas][colunas] linhas : horizontal e coluna [vertical]
// [00][01][02][03][04]
// [10][11][12][13][14]
// [20][21][22][23][24]
// [30][31][32][33][34]
// [40][41][42][43][44]

int main() {
    //vetores e string
    char nome[3][50];
    for (int i = 0; i < 3; i++) { // digitar 3 nomes aqui
        printf("Qual e seu nome? ");
        scanf("%s", &nome[i]);
    }
    for (int i = 0; i < 3 ; i++) {
        printf("Olá %s \n", nome[i]); // colocar [i] para imprimir todos
    }

    ////////////=========//////////////////////////

    int numeros[2][2]; // matriz 2 por 2
    // [00][01]
    // [10][11]
    numeros[0][0] = 1; // mudando os valores
    numeros[0][1] = 2;
    numeros[1][0] = 3;
    numeros[1][1] = 4;

    for (int i = 0; i < 2; i++) { // linha
        for (int j = 0; j < 2; j++) { // coluna
            printf("Numeros[%d][%d] vale %d\n",i , j , numeros[i][j]);
        }
    }

    float matriz[5][5];
    float contador = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = contador + 1;
            printf("Numeros[%d][%d] vale %.2f\n",i , j , matriz[i][j]);
            contador++;
        }
    }

    return 0;
}