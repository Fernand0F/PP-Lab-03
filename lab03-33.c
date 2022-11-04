#include <stdio.h>

void main() {
    float p1, p2;

    printf("Digite o preco do produto: ");
    scanf("%f", &p1);

    if (p1 < 50) {
        p2 = p1 * 1.05;
    }
    else if ((p1 >= 50)&&(p1 <= 100)) {
        p2 = p1 * 1.1;
    }
    else if (p1 > 100) {
        p2 = p1 * 1.15;
    }

    printf("Novo preco: %.2f\n", p2);

    if (p2 < 80) {
        printf("Barato");
    }
    else if ((p2 >= 80)&&(p2 <= 120)) {
        printf("Normal");
    }
    else if ((p2 >= 120)&&(p2 <= 200)) {
        printf("Caro");
    }
    else if (p2 > 200) {
        printf("Muito caro");
    }

}