#include <stdio.h>

int maiorNum(int num1, int num2){
    
    if (num1 > num2) {
        return num1;
    } else if (num1 < num2) {
        return num2;
    }else{
        return 0;
    }
    
}

int main(){
    
    int num1, num2;
    
    printf("Escolha dois numeros para comparar: \n");
    printf("\n");
    printf("Numero 1º: \n");
    scanf("%d", &num1);
    printf("Numero 2º: \n");
    scanf("%d", &num2);
    
    int ret = maiorNum(num1, num2);
    
    if (ret == 0){
        printf("os dois numeros são iguais\n");
    } else{
        printf("O maior numero é: %d \n", ret);
    }

    return 0;
    
}