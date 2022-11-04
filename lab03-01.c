#include <stdio.h>

void main() {
    float n1, n2;

    printf("Digite um numero: ");
    scanf("%f", &n1);

    printf("Digite outro numero: ");
    scanf("%f", &n2);

    if (n1>n2) {
        printf("%.2f eh maior que %.2f", n1, n2);
    }

    if (n1<n2) {
        printf("%.2f eh maior que %.2f", n2, n1);
    }

    if (n1==n2) {
        printf("%.2f eh igual a %.2f", n1, n2);
    }
}