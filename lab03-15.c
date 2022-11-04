#include <stdio.h>

void main() {
    int x;

    printf("Digite um numero inteiro de 1 a 7: ");
    scanf("%i", &x);

    switch (x) {
        case 1:
            printf("Domingo"); break;
        case 2:
            printf("Segunda"); break;
        case 3:
            printf("Terça"); break;
        case 4:
            printf("Quarta"); break;
        case 5:
            printf("Quinta"); break;
        case 6:
            printf("Sexta"); break;
        case 7:
            printf("Sabado"); break;
        default:
            printf("Valor invalido"); break;
    }
}