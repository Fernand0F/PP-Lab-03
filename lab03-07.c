#include <stdio.h>

void main() {
    float x, y;

    printf("Digite um numero: ");
    scanf("%f", &x);

    printf("Digite outro numero: ");
    scanf("%f", &y);

    if (x>y) {
        printf("O maio numero digitado foi %.2f", x);
    }

    if (x<y) {
        printf("O maio numero digitado foi %.2f", y);
    }

    if (x==y) {
        printf("Numeros iguais");
    }
}