#include <stdio.h>

void main() {
    int x;

    printf("Digite um numero inteiro: ");
    scanf("%i", &x);

    if (x>=0) {
        printf("O log de %i eh %.3f", x, log10(x));
    }
    else {
        printf("Numero invalido");
    }
}