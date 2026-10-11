#include <stdio.h>
void trocar(int *p, int *q){
    int c;

    c = *p;
    *p = *q;
    *q = c;
    
}

int main(){
    int a, b;

    printf("Qual o primeiro valor: \n");
    scanf("%d", &a);

    printf("Qual o segundo valor: \n");
    scanf("%d", &b);

    trocar(&a, &b);

    printf("Os valores trocados são: \n");
    printf("%d \n", a);
    printf("%d \n", b);

    return 0;
}