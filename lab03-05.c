#include <stdio.h>

void main() {
    int x;

    printf("Digite um numero inteiro: ");
    scanf("%i", &x);

    if ((x%2)==0) {
        printf("%i eh par", x);
    }
    else {
        printf("%i eh impar", x);
    }
}