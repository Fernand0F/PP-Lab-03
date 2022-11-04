#include <stdio.h>

void main() {
    float h, p;

    printf("Digite sua altura: ");
    scanf("%f", &h); 

    printf("Digite seu peso: ");
    scanf("%f", &p); 

    if (h < 1.2) {
        if (p < 60) {
            printf("Categoria: A");
        }
        else if ((p >= 60)&&(p <= 90)) {
            printf("Categoria: D");
        }
        else if (p > 90) {
            printf("Categoria: G");
        }
    }
    else if ((h >=1.2)&&(h<=1.7)) {
        if (p < 60) {
            printf("Categoria: B");
        }
        else if ((p >= 60)&&(p <= 90)) {
            printf("Categoria: E");
        }
        else if (p > 90) {
            printf("Categoria: H");
        }
    }
    else if (h > 1.7){
        if (p < 60) {
            printf("Categoria: C");
        }
        else if ((p >= 60)&&(p <= 90)) {
            printf("Categoria: F");
        }
        else if (p > 90) {
            printf("Categoria: I");
        }
    }
}