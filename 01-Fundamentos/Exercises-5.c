#include <stdio.h> 
int main(){ 
    float n1, n2, n3, media; 
    printf("Qual a primeira nota?\n"); 
    scanf("%f", &n1); 
    printf("Qual a segunda nota?\n"); 
    scanf("%f", &n2); 
    printf("Qual a terceira nota?\n"); 
    scanf("%f", &n3); 
    media = (n1 + n2 + n3) / 3 ; 
    if (media >= 7 ){ 
        printf("Parabéns, Aprovado :): Nota %1.f\n", media); 
    } else if (media >= 5 && media < 7){ 
        printf("IIIh cuidado está de recuperação: Nota %1.f\n", media); 
    } else { 
        printf("Que pena não foi dessa vez: Nota %1.f", media); 
    } 
    return 0; 
}