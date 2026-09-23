#include <stdio.h>

int main() {
    int l, c;

    printf("Quantas linhas eu preciso fazer: ");
    scanf("%d", &l);

    printf("Quantas colunas eu preciso fazer: ");
    scanf("%d", &c);

    for (int i = 0; i < l; i++) {

        for (int j = 0; j < c; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}