#include <stdio.h>

void main() {
    int a;
    
    printf("Digite um ano: ");
    scanf("%d", &a);

    if ((a % 4) == 0) {
        printf("Este eh um ano bissexto");
    }
    else {
        printf("Este nao eh um ano bissexto");
    }
}