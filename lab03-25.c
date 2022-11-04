#include <stdio.h>
#include <math.h>

void main() {
    float a, b, c, delta;

    printf("ax2 + bx + c = 0\n\n");

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Nao eh uma equacao de 2 grau");
    }
    else {
        delta = (b*b) - (4 * a * c);

        if (delta < 0) {
            printf("Nao existe raiz");
        }
        else if (delta == 0) {
            printf("Resultado: %.3f\n", (-b)/(2*a));
            printf("Raiz unica");
        }
        else if (delta >= 0) {
            printf("Raiz 1: %.3f\n", (((-b)+sqrt(delta))/(2*a)));
            printf("Raiz 2: %.3f", (((-b)-sqrt(delta))/(2*a)));
        }
    }
}