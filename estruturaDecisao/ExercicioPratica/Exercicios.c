#include <stdio.h>


int exercicio1() {
    int valor1, valor2, valor3, somaQuadrado = 0;

    printf("Digite 3 valores: \n");
    printf("Digite o valor 1: ");
    scanf("%d", &valor1);
    printf("Digite o valor 2: ");
    scanf("%d", &valor2);
    printf("Digite o valor 3: ");
    scanf("%d", &valor3);
     somaQuadrado = (valor1 * valor1) + (valor2 * valor2) + (valor3 * valor3);
    printf("Resultado do quadrado da soma: %.2d\n", somaQuadrado);
    return 0;
}

float exercicio2() {
    float nota1, nota2, nota3, nota4, resultado ;
    float media = 4;

    printf("Digite 4 notas: \n");
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    printf("Digite a nota 4: ");
    scanf("%f", &nota4);
    resultado = (nota1 + nota2 + nota3 + nota4) / media;
    printf("Resultado da média: %.2f \n" , resultado);
    return 0;
}

int exercicio3() {
    float amigo1 , amigo2 , amigo3;
    float premioTotal;

    printf("Digite a o valor do amigo1: ");
    scanf("%f", &amigo1);
    printf("Digite a o valor do amigo2: ");
    scanf("%f", &amigo2);
    printf("Digite a o valor do amigo3: ");
    scanf("%f", &amigo3);
    printf("Digite o valor da premiacao: ");
    scanf("%f", &premioTotal);

    float totalAposta = amigo1 + amigo2 + amigo3;
    float premio1 = (amigo1 / totalAposta) * premioTotal;
    float premio2 = (amigo2 / totalAposta) * premioTotal;
    float premio3 = (amigo3 / totalAposta) * premioTotal;

    if (amigo1 >= 50 && amigo2 >= 50 && amigo3 >= 50 ) { // se o numero que eles apostar for menor que 50 eles perdem a aposta
        printf("Ganhou a aposta!\n");
        printf("Total de apostas %.2f\n", totalAposta);
        printf("O amigo 1 apostou %.2f e vai receber %.2f\n" , amigo1,  premio1); // 1000
        printf("O amigo 2 apostou %.2f e vai receber %.2f\n" , amigo2,  premio2); // 4000
        printf("O amigo 3 apostou %.2f e vai receber %.2f\n" , amigo3,  premio3); // 10000
    }
    else {
        printf("Perdeu a aposta!");
    }

    return 0;
}


int main() {
    exercicio1();
    exercicio2();
    exercicio3();
}
