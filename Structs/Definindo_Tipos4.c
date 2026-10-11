#include <stdio.h>
#include <string.h>
//Struct -> estrutura
struct st_contato {
    char nome[100];
    char telefone[20];
    char email[100];
    int ano_nascimento;
};//declarar um array de aluno , ou declarar la em baixo , vai ter 5 alunos

struct st_agenda { // tenho uma agenda de contatos
    struct st_contato contatos[100];
}agenda;


int main() {
    //sctruct st_aluno alunos[5];

    for (int i = 0; i < 2; i++) {
        printf("Informe o nome do %d: ", i+1);
        fgets(agenda.contatos[i].nome, 100 , stdin); // maximo de 10 caracteres na matricula

        printf("Informe o ano de nascimento do %d:", i+1);
        scanf("%d", &agenda.contatos[i].ano_nascimento);
        getchar();//nao da enter e nao pular linha no terminal

        printf("Informe o telefone do %d: ", i+1);
        fgets(agenda.contatos[i].telefone, 20 , stdin);

        printf("Informe o email do %d: ", i+1);
        fgets(agenda.contatos[i].email,100, stdin);
       // getchar(); // para nao ir direto pro proximo campo
    }

    for (int i = 0; i < 2; i++) {
        printf("======================= Agenda de contato : =======================\n" );
        printf("======================= Contatos : =======================\n" );
        printf("Nome: %s", agenda.contatos[i].nome);
        printf("Telefone: %s", agenda.contatos[i].telefone);
        printf("Email: %s", agenda.contatos[i].email);
        printf("Ano de nascimento: %d\n", agenda.contatos[i].ano_nascimento);
    }


    return 0;
}