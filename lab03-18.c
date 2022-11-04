#include <stdio.h>

void main() {
    int cmd;
    float v1, v2, r;
        
    printf("[ 1 ] Adicao\n[ 2 ] Subtracao\n[ 3 ] Multiplicacao\n[ 4 ] Divisao\n");
    scanf("%d", &cmd);
    
    if ((cmd < 1)||(cmd > 4)) {
        printf("Valor fora dos parametros");
    }
    else {
        printf("Digite o primeiro valor: ");
        scanf("%f", &v1);

        printf("Digite o segundo valor: ");
        scanf("%f", &v2);

        switch (cmd) {
            case 1:
                r = v1 + v2; 
                printf("%.2f + %.2f = %.2f", v1, v2, r);
                break;
            case 2:
                r = v1 - v2;
                printf("%.2f - %.2f = %.2f", v1, v2, r);
                break;
            case 3:
                r = v1 * v2;
                printf("%.2f x %.2f = %.2f", v1, v2, r);
                break;
            case 4:
                r = v1 / v2;
                printf("%.2f / %.2f = %.2f", v1, v2, r);
                break;
        }
    }
}