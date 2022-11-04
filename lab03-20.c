#include <stdio.h>

void main() {
    float a, b, c;

    printf("Digite o valor do lado A do triangulo: ");
    scanf("%f", &a);

    printf("Digite o valor do lado B do triangulo: ");
    scanf("%f", &b);

    printf("Digite o valor do lado C do triangulo: ");
    scanf("%f", &c);

    if ((a >= (b + c))||(b >= (c + a))||(c >= (a + b))) {
        printf("Esses tres valores nao podem formar um tringulo");
    }
    else {
        if ((a==b)&&(a==c)) {
            printf("Este eh um triangulo equilatero");
        }
        else if ((a==b)||(a==c)||(b==c)) {
            printf("Este eh um triangulo isosceles");
        }
        else {
            printf("Este eh um tringulo escaleno");
        }
    }
}