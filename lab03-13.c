#include <stdio.h>

void main() {
    float n1, n2, n3, m;

    printf("Nota 1: ");
    scanf("%f", &n1);

    printf("Nota 2: ");
    scanf("%f", &n2);

    printf("Nota 3: ");
    scanf("%f", &n3);

    m = (n1+n2+(2*n3))/4;

    printf("Sua media ponderada eh %.2f\n", m);

    if (m>=60) {
        printf("APROVADO!!");
    }
    else {
        printf("REPROVADO!");
    }
}