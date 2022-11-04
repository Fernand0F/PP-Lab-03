#include <stdio.h>

void main() {
    int i, t;

    printf("Digite sua idade: ");
    scanf("%d", &i);

    printf("Digite seu tempo de servico: ");
    scanf("%d", &t);

    if ((i >= 65)||(t >= 30)||((i >= 60)&&(t >= 25))) {
        printf("Voce pode se aposentar");
    }
    else {
        printf("Voce nao pode se aposentar");
    }
}