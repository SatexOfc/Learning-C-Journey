#include <stdio.h>

int main() {
    int numero, i;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    
    for (i = 1; i <= numero; i++) {
        printf("Numero: %d\n", i);
    }

    return 0;
}