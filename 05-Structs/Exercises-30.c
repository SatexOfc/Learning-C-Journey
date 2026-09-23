#include <stdio.h>

struct aluno{
    char nome[50];    
    int idade;
    float nota;
};

void mostrarAluno(struct aluno aluno){
    printf("Nome: %s \n", aluno.nome);
    printf("Idade: %d \n", aluno.idade);
    printf("Nota: %.1f \n", aluno.nota);
}

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
        mostrarAluno(alunos[j]);
    }

    return 0;
}