#include <stdio.h>

int somar(int x, int y){
    return x + y;
}

int main(){
    int x, y, total;
    
    printf("Qual  o 1º numero você quer somar: \n");
    scanf("%d", &x);
    
    printf("Qual  o 2º numero você quer somar: \n");
    scanf("%d", &y);
    
    printf("Resultado: %d", somar(x,y));
    
    
    return 0;
    
}