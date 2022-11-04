#include <stdio.h>

void main() {
    int x, y;

    printf("Digite um numero inteiro: ");
    scanf("%i", &x);

    printf("Digite outro numero inteiro: ");
    scanf("%i", &y);

    if (x>y) {
        printf("O maio numero digitado foi %i\n", x);
        printf("%i - %i = %i", x, y, x-y);
    }

    if (x<y) {
        printf("O maio numero digitado foi %i\n", y);
        printf("%i - %i = %i", y, x, y-x);
    }

    if (x==y) {
        printf("Os numeros sao iguais\n");
        printf("%i - %i = %i", x, y, x-y);
    }
}