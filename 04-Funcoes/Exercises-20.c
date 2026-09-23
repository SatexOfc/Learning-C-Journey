#include <stdio.h>

void saudacao(char nome[50]){
    printf("Olá, %s", nome);
}

int main(){
    char nome[50];
    
    printf("Olá, qual o seu nome?\n");
    scanf("%s", nome);
    
    saudacao(nome);
    
    return 0;
}