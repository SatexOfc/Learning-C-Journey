#include <stdio.h>

int media(float n1, float n2, float n3){
        
    float md = (n1+n2+n3)/3;

    if(md >= 7){
        return 0;
    } else if(md < 7 && md >= 5){
        return 1;
    } else {
        return 2;
    }
}

int main(){
    char nome[50];
    int idade;
    float n1, n2, n3;

    printf("Digite o nome do aluno:\n");
    scanf("%s", nome);

    printf("Digite a idade do aluno:\n");
    scanf("%d", &idade);

    printf("Digite a 1 nota:\n");
    scanf("%f", &n1);
    printf("Digite a 2 nota:\n");
    scanf("%f", &n2);
    printf("Digite a 3 nota:\n");
    scanf("%f", &n3);

    int resultado = media(n1, n2, n3);

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    
    if(resultado == 0){
        printf("O aluno foi aprovado!\n");
    } else if(resultado == 1){
        printf("O aluno está de recuperação!\n");
    } else {
        printf("O aluno foi reprovado!\n");
    }

    return 0;
}