#include <stdio.h>

void main() {
    int x, d3, d5;

    printf("Digite um numero para ser verificado: ");
    scanf("%d", &x);

    if ((x % 3) == 0) {
        d3 = 1;
        printf("%d eh divisivel por 3? SIM\n", x);
    }
    else {
        printf("%d eh divisivel por 3? NAO\n", x);
    }

    if ((x % 5) == 0) {
        d5 = 1;
        printf("%d eh divisivel por 5? SIM\n", x);
    }
    else {
        printf("%d eh divisivel por 5? NAO\n", x);
    }

    if (d3!=d5) {
        printf("SIM, %d eh divisivel por 3 ou por 5 exclusivamente", x);
    }
    else {
        printf("NAO, %d nao eh divisivel por 3 ou por 5 exclusivamente", x);
    }
}