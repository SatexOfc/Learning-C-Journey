#include <stdio.h>

int main() {
    int i, par, impar;

    printf("Escolha um numero, os numeros dentre 0 e o numero escolhido serão classificados como Pares e Impares: ");
    scanf("%d", &i);
    
    par = 0;
    impar = 0;
    for (int j = 0; j <= i; j++) {
        if (j % 2 == 0) {
            printf("%d é par\n", j);
            par++;
        } else {
            printf("%d é impar\n", j);
            impar++;
        }
    }

    printf("Total de numeros pares: %d\n", par);
    printf("Total de numeros impares: %d\n", impar);

    return 0;
}
