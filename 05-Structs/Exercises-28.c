#include <stdio.h>

float media(float notas[]){
    float soma = 0;
    for(int i = 0; i < 3; i++){
        soma += notas[i];
    }
    return soma / 3;
}

int main(){
    char nomes[5][50];
    float notas[15];

    printf("Nomes e notas dos alunos:\n");
    for(int n = 0; n < 5; n++){
        printf("Aluno %d: ", n+1);
        scanf("%s", nomes[n]);
        for(int not = 0; not < 3; not++){
            printf("Nota %d: ", not+1);
            scanf("%f", &notas[n*3 + not]);
        }
    }

    for(int n = 0; n < 5; n++){
        float mediaAluno = media(notas + n*3);
        printf("Aluno: %s, Media: %.2f, Situacao: ", nomes[n], mediaAluno);
        if(mediaAluno >= 7){
            printf("Aprovado\n");
        } else if(mediaAluno >= 5){
            printf("Recuperacao\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}