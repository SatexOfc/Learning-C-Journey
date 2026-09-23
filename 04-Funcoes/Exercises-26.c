#include <stdio.h>
#include <math.h>


int somar(int a, int b){
    return a + b;
}

int subtrair(int a, int b){
    return a - b;
}

int multiplicar(int a, int b){
    return a * b;
}

int dividir(int a, int b){
    if (b != 0){
        return a / b;
    } else {
        return 0; // Retorna 0 ou algum valor de erro
    }
}


int main(){
    int a, b;
    int res;

    printf("Selecione a operação:\n");
    printf("1. Somar\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    int operacao;
    scanf("%d", &operacao);

    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    switch (operacao) {
        case 1:
            res = somar(a, b);
            printf("Resultado: %d\n", res);
            break;
        case 2:
            res = subtrair(a, b);
            printf("Resultado: %d\n", res);
            break;
        case 3:
            res = multiplicar(a, b);
            printf("Resultado: %d\n", res);
            break;
        case 4:
            res = dividir(a, b);
            if (b != 0) {
                printf("Resultado: %d\n", res);
            }
            break;
        default:
            printf("Operação inválida.\n");
    }
}