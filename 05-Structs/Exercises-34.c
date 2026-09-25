#include <stdio.h>
#include <string.h>

struct aluno {
    char nome[50];
    int idade;
    float nota;
};

int search(struct aluno alunos[], int quant, char nome[]) {
    for (int i = 0; i < quant; i++) {
        if (strcmp(alunos[i].nome, nome) == 0) {
            return i;
        }
    }
    return -1;
}

int main(){
    
    int found, quant;
    char nome[50];

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quant);

    struct aluno aluno[quant];

    for (int j = 0; j < quant; j++){

        printf("Digite o nome do aluno: ");
        scanf("%s \n", aluno[j].nome);

        printf("Digite a idade do aluno: ");
        scanf("%d \n", &aluno[j].idade);

        printf("Digite a nota do aluno: ");
        scanf("%f \n", &aluno[j].nota);
        
    }

    printf("Digite o nome do aluno a ser buscado: ");
    scanf("%s", nome);

    found = search(aluno, quant, nome);

    if (found == -1) {
        printf("Aluno não encontrado.\n");
    } else {
        printf("Aluno encontrado:\n");
        printf("Nome: %s\n", aluno[found].nome);
        printf("Idade: %d\n", aluno[found].idade);
        printf("Nota: %.2f\n", aluno[found].nota);
    }

    return 0;

}