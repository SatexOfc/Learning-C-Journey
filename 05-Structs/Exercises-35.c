#include <stdio.h>  

struct aluno {
    char nome[50];
    int idade;
    float nota;
};

int search(struct aluno aluno[], int quant){
    
    int maior = 0;

    for(int j = 0; j < quant; j++){
        if(aluno[j].nota > aluno[maior].nota){
            maior = j;
        }
    }

    return maior;
}

int main(){
    int quant, maior;
    printf("Digite a Quantidade de alunos: \n");
    scanf("%d", &quant);

    struct aluno aluno[quant];

    for(int i = 0; i < quant; i++){
        printf("Digite o nome do aluno: ");
        scanf("%s", aluno[i].nome);

        printf("Digite a idade do aluno: ");
        scanf("%d", &aluno[i].idade);

        printf("Digite a nota do aluno: ");
        scanf("%f", &aluno[i].nota);
    }

    maior = search(aluno, quant);

    printf("O aluno com a maior nota é: %s\n", aluno[maior].nome);
    printf("Com Nota: %.1f\n", aluno[maior].nota);

    
    return 0;
}