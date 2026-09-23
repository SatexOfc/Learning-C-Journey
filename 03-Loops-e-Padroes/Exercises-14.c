#include <stdio.h>

int main (){

    int l;

    printf("Quantas Linhas você quer que eu faça?: \n");
    scanf("%d", &l);
    
    for (int i = 1; i <= l; i++) {
    
        for (int j = 0; j < i; j++){

            printf("*");

        }
         printf("\n");
    }

    return 0;

}
