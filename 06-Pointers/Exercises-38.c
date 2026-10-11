#include <stdio.h>
#include <stdlib.h>


int main(){

    int quant;

    printf("qual o tamanho da reserva de memoria: \n");
    scanf("%d", &quant);

    if(quant > 0){
        int *numeros = malloc(quant * sizeof(int));

        if(numeros == NULL){
            return 0 ;
        } else{
            for(int i = 0; i < quant; i++){
                printf("Digite um numero: \n");
                scanf("%d", &numeros[i]);    
            }
        }

        printf("\n");

        for(int j = 0; j < quant; j++){
            printf("%d \n", *(numeros + j));
        }

        free(numeros);

    }else{
        printf("alocação falhou!");
        return 0;
    }
    
    return 0;
}