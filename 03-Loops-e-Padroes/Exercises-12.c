#include <stdio.h>

int main(){

    //Aprendendo e definindo o comando "for" e "if" para contar números positivos, negativos e zeros. Sem Array.
    int i, j, pos, neg, zero;
    pos = 0;
    neg = 0;
    zero = 0;
    j = 1;
    int a;
    printf("Escreva 10 números inteiros(Negativos, Positivos e Zeros):\n");

    for (i = 0; i <10; i++){

        printf("Digite %iº número: ", j);
        scanf("%d", &a);
        if (a > 0){
            pos++;
        } else if (a < 0){
            neg++;
        } else {
            zero++;
        }

        j++;

    }

    printf("Quantidade de números positivos: %d\n", pos);
    printf("Quantidade de números negativos: %d\n", neg);
    printf("Quantidade de zeros: %d\n", zero);

    return 0;
}