#include <stdio.h>

void main() {
    float distancia, litros, consumo;

    printf("Digite a distancia percorrida (quilometros): ");
    scanf("%f", &distancia);

    printf("Digite o a quantodade de gasolina gasta (litros): ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    if (consumo < 8) {
        printf("Venda o carro!");
    }
    else if (consumo > 14) {
        printf("Super economico!");
    }
    else {
        printf("Economico!");
    }
}