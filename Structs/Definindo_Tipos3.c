#include <stdio.h>
#include <string.h>
//Struct -> estrutura
struct st_aluno {
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
}alunos[5];//declarar um array de aluno , ou declarar la em baixo , vai ter 5 alunos


int main() {
    //sctruct st_aluno alunos[5];

    for (int i = 0; i < 5; i++) {
        printf("Informe a matricula do aluno %d: ", i+1);
        fgets(alunos[i].matricula, 10 , stdin); // maximo de 10 caracteres na matricula

        printf("Informe o nome do aluno %d: ", i+1);
        fgets(alunos[i].nome, 100 , stdin);

        printf("Informe o curso do aluno %d: ", i+1);
        fgets(alunos[i].curso, 50 , stdin);

        printf("Informe o ano de nascimento do aluno %d: \n", i+1);
        scanf("%d", &alunos[i].ano_nascimento);
        getchar(); // para nao ir direto pro proximo campo
    }

    for (int i = 0; i < 5; i++) {
        printf("======================= DADOS DO ALUNO %d: =======================\n", i+1 );
        printf("Matricula: %s", alunos[i].matricula);
        printf("Nome: %s", alunos[i].nome);
        printf("Curso: %s", alunos[i].curso);
        printf("Ano de nascimento: %d", alunos[i].ano_nascimento);
    }


    return 0;
}