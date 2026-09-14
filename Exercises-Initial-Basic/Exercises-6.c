#include <stdio.h>

int main(){
    
    int escolha;
    float num1, num2, resultado;

    printf("Escolha uma opção:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        /* code for addition */
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        resultado = num1 + num2;
        printf("A soma é: %.2f\n", resultado);
        break;
    case 2:
        /* code for subtraction */;
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        resultado = num1 - num2;
        printf("A subtração é: %.2f\n", resultado);
        break;
    case 3:
        /* code for multiplication */
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        resultado = num1 * num2;
        printf("A multiplicação é: %.2f\n", resultado);
        break;
    case 4:
        /* code for division */
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        if (num2 != 0)
        {
            resultado = num1 / num2;
            printf("A divisão é: %.2f\n", resultado);
        }
        else
        {
            printf("Erro: Divisão por zero não é permitida.\n");
        }
        break;

    default:
        printf("Opção inválida.\n");
        break;
    }

    return 0;
}