#include <stdio.h>

int multi(int x){
    
    return x*2;
}

int main(){
    int x;
    
    printf("Qual numero você quer multiplicar");
    scanf("%d", &x);
    
    printf("Resultado:%d", multi(x));
    
    
    return 0;
    
}