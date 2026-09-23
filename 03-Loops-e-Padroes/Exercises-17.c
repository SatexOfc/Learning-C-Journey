#include <stdio.h>

int main (){
     
    int c, l;

    printf("Quantas Colunas você quer que eu faça?: \n");
    scanf("%d", &c);

    printf("Quantas Linhas você quer que eu faça?: \n");
    scanf("%d", &l);

    for (int i = 1; i <= l; i++) {
    
        for (int j = 1; j <= c; j++){

            if (i % 2 == 0 ){
                printf("# ");
            } else {
                printf(" #");
            }

        }

        printf("\n");
    }

    return 0;
}