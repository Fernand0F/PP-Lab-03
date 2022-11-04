#include <stdio.h>

void main() {
    int i;

    printf("Digite a idade do nadador: ");
    scanf("%d", &i);

    if ((i>=5)&&(i<=7)) {
        printf("Categoria: Infantil A");
    }
    else if ((i>=8)&&(i<=10)) {
        printf("Categoria: Infantil B");
    }
    else if ((i>=11)&&(i<=13)) {
        printf("Categoria: Juvenil A");
    }
    else if ((i>=14)&&(i<=17)) {
        printf("Categoria: Juvenil B");
    }
    else if (i >= 18) {
        printf("Categoria: Senior");
    }
    else {
        printf("Valor fora dos parametros");
    }
}