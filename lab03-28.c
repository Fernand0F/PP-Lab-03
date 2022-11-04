#include <stdio.h>
#include <math.h>

void main() {
    int x, y, z, cmd;
    float r;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &x);

    printf("Digite outro inteiro positivo: ");
    scanf("%d", &y);

    printf("Digite outro inteiro positivo: ");
    scanf("%d", &z);

    printf("\nSelecione o tipo de media desejada:\n");
    printf("[ 1 ] Geometrica\n");
    printf("[ 2 ] Ponderada\n");
    printf("[ 3 ] Harmonica\n");
    printf("[ 4 ] Aritmetica\n");
    scanf("%d", &cmd);

    switch (cmd) {
        case 1:
            r = pow(x*y*z, 1.0/3.0);
            printf("Media geometrica: %.2f", r);
            break;
        case 2:
            r = ((1*x)+(2*y)+(3*z)) / 6.0;
            printf("Media ponderada: %.2f", r);
            break;
        case 3:
            r = 1.0 / ((1.0/x)+(1.0/y)+(1.0/z));
            printf("Media harmonica: %.2f", r);
            break;
        case 4:
            r = (x+y+z)/3.0;
            printf("Media aritmedica: %.2f", r);
            break;
        default:
            printf("Valor fora soa parametros"); break;
    }
}