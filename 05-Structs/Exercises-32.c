#include <stdio.h>

struct aluno{
    char nome[50];    
    int idade;
    float nota;
};

float mdTurma(struct aluno aluno[]){
    float soma = 0;

    for (int n = 0; n < 3; n++){
        soma += aluno[n].nota;
    }

    return soma / 3;
}

int situacao(struct aluno aluno){
    float nota = aluno.nota;

    if (nota >= 7){
        return 0;
    } else if (nota >= 5){
        return 1;
    } else {
        return 2;
    }
}

void mostrarAluno(struct aluno aluno){
    printf("Nome: %s \n", aluno.nome);
    printf("Idade: %d \n", aluno.idade);
    printf("Nota: %.1f \n", aluno.nota);
}

int main(){
    struct aluno alunos[3];
    int resultado;

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

        resultado = situacao(alunos[j]);

        if (resultado == 0){
            printf("Aprovado!\n");
        } else if(resultado == 1){
            printf("Recuperação\n");
        } else {
            printf("Reprovado\n");
        }

        printf("\n");
    }

    printf("Media da Turma: %.1f \n", mdTurma(alunos));

    return 0;
}