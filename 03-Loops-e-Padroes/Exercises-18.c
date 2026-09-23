#include <stdio.h>

int main(){
    int l, c; 
    
    printf("Quantas Linhas:\n");
    scanf("%d", &l);
    
    printf("Quantas Colunas:\n");
    scanf("%d", &c);
    
    for (int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if((i + j) % 2 == 0){
                
                printf("#");
                
            }else{
                
                printf(" ");
                
            }
        }
        
        printf("\n");
    }
    
    return 0;
    
}