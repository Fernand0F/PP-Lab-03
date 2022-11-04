#include <stdio.h>
#include <math.h>

void main() {
    float x;

    printf("Digite um numero: ");
    scanf("%f", &x);

    if (x>=0) {
        printf("A raiz quadrada de %.2f eh %.2f", x, sqrt(x));
    }
    else {
        printf("Numero invalido!");
    }
}