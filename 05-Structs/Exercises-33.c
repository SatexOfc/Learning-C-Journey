#include <stdio.h>

struct aluno{
    char nome[50];    
    int idade;
    float nota;
};

float mdTurma(struct aluno aluno[], int quant){
    float soma = 0;

    for (int n = 0; n < quant; n++){
        soma += aluno[n].nota;
    } 

    return soma / quant;
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
    int resultado, quant;

    printf("Quantos alunos serão cadastrados?: \n");
    scanf("%d", &quant);

    struct aluno alunos[quant];

    for(int i = 0; i < quant; i++){
        printf("Qual o nome do aluno? \n");
        scanf("%s", alunos[i].nome);

        printf("Qual a idade do aluno? \n");
        scanf("%d", &alunos[i].idade);

        printf("Qual a nota do aluno? \n");
        scanf("%f", &alunos[i].nota);
    }

    for(int j = 0; j < quant; j++){
        mostrarAluno(alunos[j]);

        resultado = situacao(alunos[j]);

        if (resultado == 0){
            printf("Aprovado!\n");
            printf("\n");
        } else if(resultado == 1){
            printf("Recuperação\n");
            printf("\n");
        } else {
            printf("Reprovado\n");
            printf("\n");
        }
    }

    printf("Media da Turma: %.1f \n", mdTurma(alunos, quant));

    return 0;
}