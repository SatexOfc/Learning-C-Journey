#include <stdio.h>

int main() {
    char nome[100];
    int idade;
    float altura;

    printf("Qual o seu nome?\n");
    scanf("%s", nome);
    printf("Qual sua idade?\n");
    scanf("%d", &idade);
    printf("Qual sua Altura?\n");
    scanf("%f", &altura);

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    
    return 0;
}