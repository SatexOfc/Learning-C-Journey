#include <stdio.h>

int main() {
    float nota1, nota2;

    printf("Qual a primeira nota\n");
    scanf("%f", &nota1);
    printf("Qual a segunda nota\n");
    scanf("%f", &nota2);

    float media = (nota1 + nota2) / 2;

    printf("A média das notas é: %.2f\n", media);

    return 0;
}