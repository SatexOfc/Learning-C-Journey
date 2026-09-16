#include <stdio.h>

int main() {
    int numero, i;
    printf("Digite um número inteiro para ser mostrado a tabuada: ");
    scanf("%d", &numero);

    
    for (i = 1; i <= 10; i++) {
        printf("Tabuada de %d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}