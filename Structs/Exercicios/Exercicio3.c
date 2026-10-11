#include <stdio.h>

struct vetor {
    float x;
    float y;
    float z;
};


int main() {
    struct vetor vetores[3];


    for (int i = 0; i < 2; i++) { // vai ter 3 indices do 0 ao 2 // ai vou ter repetir e digitar duas vezes
        printf("DIgite os dados do vetor %d: \n", i+1);
        printf("Primeiro valor: ");
        scanf("%f", &vetores[i].x);
        printf("Segundo valor: ");
        scanf("%f", &vetores[i].y);
        printf("Terceiro valor: ");
        scanf("%f", &vetores[i].z);
    }
    vetores[2].x = vetores[0].x + vetores[1].x;
    vetores[2].y = vetores[0].y + vetores[1].y;
    vetores[2].z = vetores[0].z + vetores[1].z;

    printf("Soma dos vetores de X e %.2f, Y e %.2f, de Z e %.2f \n", vetores[2].x, vetores[2].y, vetores[2].z );

    return 0;
}
