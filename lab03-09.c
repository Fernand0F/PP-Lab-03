#include <stdio.h>

void main() {
    float s, p;

    printf("Digite seu salario: ");
    scanf("%f", &s);

    printf("Digite o valor da prestacao: ");
    scanf("%f", &p);

    if (p>(s*0.2)) {
        printf("Emprestimo nao concedido");
    }
    else {
        printf("Emprestimo concedido");
    }
}