#include <stdio.h>

void main() {
    float v, c;

    printf("Digite o valor da venda: ");
    scanf("%f", &v);

    if (v >= 100000.0) {
        c = 700.0 + (0.16 * v);
    }
    else if ((v < 100000.0)&&(v >= 80000.0)) {
        c = 650.0 + (0.14 * v);
    }
    else if ((v < 80000.0)&&(v >= 60000.0)) {
        c = 600.0 + (0.14 * v);
    }
    else if ((v < 60000.0)&&(v >= 40000.0)) {
        c = 550.0 + (0.14 * v);
    }
    else if ((v < 40000.0)&&(v >= 20000.0)) {
        c = 500.0 + (0.14 * v);
    }
    else if (v < 20000) {
        c = 400.0 + (0.14 * v);
    }

    printf("Comissao a ser pega ao vendedor: %.2f", c);
}