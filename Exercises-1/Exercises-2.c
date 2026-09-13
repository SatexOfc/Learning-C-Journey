#include <stdio.h>

int main() {
    float soma, sub, mult, div;
    int escolha;

    printf("Escolha uma operação:\n");
    printf("1 - Soma\n");  
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        float num1, num2;
        printf("Digite dois números para somar:\n");
        scanf("%f %f", &num1, &num2);
        soma = num1 + num2;
        printf("Resultado da soma: %.2f\n", soma);
    } else if (escolha == 2) {
        float num1, num2;
        printf("Digite dois números para subtrair:\n");
        scanf("%f %f", &num1, &num2);
        sub = num1 - num2;
        printf("Resultado da subtração: %.2f\n", sub);
    } else if (escolha == 3) {
        float num1, num2;
        printf("Digite dois números para multiplicar:\n");
        scanf("%f %f", &num1, &num2);
        mult = num1 * num2;
        printf("Resultado da multiplicação: %.2f\n", mult);
    } else if (escolha == 4) {
        float num1, num2;
        printf("Digite dois números para dividir:\n");
        scanf("%f %f", &num1, &num2);
        if (num2 != 0) {
            div = num1 / num2;
            printf("Resultado da divisão: %.2f\n", div);
        } else {
            printf("Erro: Divisão por zero não é permitida.\n");
        }
    } else {
        printf("Escolha inválida.\n");
    }
    return 0;
};