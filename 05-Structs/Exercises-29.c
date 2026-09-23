#include <stdio.h>

struct aluno{
    char nome[50];    
    int idade;
    float nota;
};

int main(){
    struct aluno alunos[3];

    for(int i = 0; i < 3; i++){
        printf("Qual o nome do aluno? \n");
        scanf("%s", alunos[i].nome);

        printf("Qual a idade do aluno? \n");
        scanf("%d", &alunos[i].idade);

        printf("Qual a nota do aluno? \n");
        scanf("%f", &alunos[i].nota);
    }

    for(int j = 0; j < 3; j++){
        printf("Nome: %s\n", alunos[j].nome);
        printf("Idade: %d\n", alunos[j].idade);
        printf("Nota: %.1f\n", alunos[j].nota);
    }

    return 0;
}