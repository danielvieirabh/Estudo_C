#include <stdio.h>

struct aluno {
    char nome[20];
    int matricula;
    char curso[100];
};



int main() {
    struct aluno alunos[5];

    for (int i = 0; i < 5; i++) {
        printf("Informe os dados do aluno %d\n: ", i+1);
        printf("Qual o nome do aluno %d : ", i+1);
        fgets(alunos[i].nome, 20, stdin);
        printf("Qual o curso do aluno %d : ", i+1);
        fgets(alunos[i].curso, 100, stdin);
        printf("Qual a matricula do aluno %d\n: ", i+1);
        scanf("%d", &alunos[i].matricula);
        getchar(); // para nao ir direto pro proximo campo
    }

    for (int i = 0; i < 5; i++) {
        printf("Dados do aluno %d: Nome: %s, Matricula: %d, Curso: %s\n", i + 1, alunos[i].nome, alunos[i].matricula, alunos[i].curso);

    }




    return 0;
}