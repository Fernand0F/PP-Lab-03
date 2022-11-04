#include <stdio.h>

void main() {
    int cod, quant;
    float preco;

    printf("100 - Cahorro quente - 1,20\n");
    printf("101 - Bauro Simples - 1,30\n");
    printf("102 - Bauru com Ovo - 1,50\n");
    printf("103 - Hamburguer - 1,20\n");
    printf("104 - Cheeseburguer - 1,70\n");
    printf("105 - Suco - 2,20\n");
    printf("106 - Refrigerante - 1,00\n");
    printf("Opcao: ");
    scanf("%d", &cod);

    printf("Quantidade: ");
    scanf("%d", &quant);

    switch (cod) {
        case 100:
            preco = 1.2; break;
        case 101:
            preco = 1.3; break;
        case 102:
            preco = 1.5; break;
        case 103:
            preco = 1.2; break;
        case 104:
            preco = 1.7; break;
        case 105:
            preco = 2.2; break;
        case 106:
            preco = 1.0; break;
    }

    printf("Preco do pedido: %.2f", quant*preco);
}