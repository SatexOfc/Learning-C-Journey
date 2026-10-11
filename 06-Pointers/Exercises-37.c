#include <stdio.h>
#include <string.h>

struct aluno {
    char nome[50];
    int idade;
    float nota;
};

void analisarTurma(struct aluno *alunos, float *media, int *maior, int *menor){

    float comparadorm = (alunos)->nota;
    float comparadorM = (alunos)->nota;

    for(int i = 0; i < 4; i++){
        *media += (alunos + i)->nota;

        if (comparadorm > (alunos + i)->nota){
            *menor = i;
            comparadorm = (alunos + i)->nota;
        }

        if (comparadorM < (alunos + i)->nota){
            *maior = i;
            comparadorM = (alunos + i)->nota;
        }
    }

    *media = *media /4;
}

int search(struct aluno *alunos, char bnome[]){

    int bsearch;

    for (int j = 0; j < 4; j++){
        bsearch = strcmp((alunos + j)->nome, bnome);

        if (bsearch == 0){
            return j;
        }
    }

    return -1;
}

int main(){

    float media = 0;
    int maior, menor;
    int founded;
    char bnome[50];

    struct aluno alunos[4] = {
        {"Sate", 19, 8.5},
        {"Edu", 20, 9.0},
        {"Joao", 20, 7.0},
        {"Lucas", 18, 8.0}
    };

    printf("Qual Aluno você quer procurar: \n");
    scanf("%s", bnome);

    analisarTurma(alunos, &media, &maior, &menor);
    founded = search(alunos, bnome);

    printf("Media da Turma: %.1f \n", media);
    printf("Maior nota: %s \n", (alunos + maior)->nome);
    printf("Menor nota: %s\n", (alunos + menor)->nome);

    printf("\n");

    if(founded == -1){
        printf("Aluno Não Encontrado!");
    } else{
        printf("Aluno Encontrado: \n");
        printf("%s \n", (alunos + founded)->nome);
        printf("%d \n", (alunos + founded)->idade);
        printf("%.1f \n", (alunos + founded)->nota);
        
    }

    return 0;
}