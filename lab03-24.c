#include <stdio.h>

void main() {
    int estado;
    float preco, taxa;

    printf("Digite o valor do produto: ");
    scanf("%f", &preco);

    printf("Para qual estado sera enviado o produto?\n");
    printf("[ 1 ] MG\n");
    printf("[ 2 ] SP\n");
    printf("[ 3 ] RJ\n");
    printf("[ 4 ] MS\n");
    scanf("%d", &estado);

    if ((estado < 1)||(estado > 4)) {
        printf("Valor fora dos parametros");
    }
    else {
        switch (estado) {
        case 1:
            taxa = 1.07; break;
        case 2:
            taxa = 1.12; break;
        case 3:
            taxa = 1.15; break;
        case 4:
            taxa = 1.08; break;
        }

        printf("O preco do produto com impostos eh: %.2f reais", taxa*preco);
    }
    
}