#include <stdio.h>

void main() {
    float b1, b2, h, a;

    printf("Digite o tamanho da base menor do trapezio: ");
    scanf("%f", &b1);

    if (b1 <= 0) {
        printf("Valor invalido");
    }
    else {
        printf("Digite o tamanho da base maior do trapezio: ");
        scanf("%f", &b2);

        if (b2 <= 0) {
            printf("Valor invalido");
        }
        else {
            printf("Digite o valor da altura do trapezio: ");
            scanf("%f", &h);

            if (h <= 0) {
                printf("Valor invalido");
            }
            else {
                a = (b1 + b2) * h / 2;

                printf("O valor da area desse trapezio eh %.2f", a);
            }
        }
    }
}