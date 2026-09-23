#include <stdio.h> 

int main(){ 
    float num1, num2; 
    printf("Programa de comparação de numeros:\n"); 
    printf("Qual o primeiro numero?\n"); 
    scanf("%f", &num1); 
    printf("Qual o segundo numero?\n"); 
    scanf("%f", &num2); 
    if (num1 > num2) { 
        printf("o numero %1.f é maior que o numero %1.f \n", num1, num2); 
    } else if (num1 < num2) { 
        printf("o numero %1.f é menor que o numero %1.f\n", num1, num2); 
    } else { 
        printf("o numero %1.f é igual ao numero %1.f\n", num1, num2); 
    } 
    return 0; 
}