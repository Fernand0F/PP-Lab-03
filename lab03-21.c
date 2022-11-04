#include <stdio.h>

void main() {
    int cmd;
    float n1, n2, r;

    printf("Escolha uma opcao\n");
    printf("[ 1 ] Soma de 2 numeros\n");
    printf("[ 2 ] Diferenca entre 2 numeros\n");
    printf("[ 3 ] Produto entre 2 numeros\n");
    printf("[ 4 ] Divisao entre 2 numeros\n");
    printf("Opcao: ");
    scanf("%d", &cmd);

    switch (cmd) {
        case 1:
            printf("Digite o primeiro valor: ");
            scanf("%f", &n1);

            printf("Digite o segundo valor: ");
            scanf("%f", &n2);

            r = n1 + n2;

            printf("%.2f + %.2f = %.2f", n1, n2, r);

            break;
        case 2:
            printf("Digite o primeiro valor: ");
            scanf("%f", &n1);

            printf("Digite o segundo valor: ");
            scanf("%f", &n2);

            if (n1 >= n2) {
                r = n1 - n2;
                printf("%.2f - %.2f = %.2f", n1, n2, r);
            }
            else {
                r = n2 - n1;
                printf("%.2f - %.2f = %.2f", n2, n1, r);
            }

            break;
        case 3:
            printf("Digite o primeiro valor: ");
            scanf("%f", &n1);

            printf("Digite o segundo valor: ");
            scanf("%f", &n2);

            r = n1 * n2;

            printf("%.2f x %.2f = %.2f", n1, n2, r);
            break;
        case 4:
            printf("Digite o primeiro valor: ");
            scanf("%f", &n1);

            printf("Digite o segundo valor: ");
            scanf("%f", &n2);

            if (n2 == 0) {
                printf("Nao existe divisao por 0");
            }
            else {
                r = n1 / n2;

                printf("%.2f / %.2f = %.2f", n1, n2, r);
            }
            break;
        default:
            printf("Valor fora dos parametros"); break;
    }
}