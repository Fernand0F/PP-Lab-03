#include <stdio.h>

void main() {
    float x, y, z;

    printf("Digite um numero: ");
    scanf("%f", &x);

    printf("Digite outro numero: ");
    scanf("%f", &y);

    printf("Digite outro numero: ");
    scanf("%f", &z);

    if ((x <= y)&&(x <= z)) {
        if (y < z) {
            printf("%.2f %.2f %.2f ", x, y, z);
        }
        else {
            printf("%.2f %.2f %.2f ", x, z, y);
        }
    }
    else if ((y <= x)&&(y <= z)) {
        if (x < z) {
            printf("%.2f %.2f %.2f ", y, x, z);
        }
        else {
            printf("%.2f %.2f %.2f ", y, z, x);
        }
    }
    else if ((z <= x)&&(z <= y)) {
        if (x < y) {
            printf("%.2f %.2f %.2f ", z, x, y);
        }
        else {
            printf("%.2f %.2f %.2f ", z, y, x);
        }
    }
}