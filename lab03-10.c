#include <stdio.h>

void main() {
    float h;
    char s;

    printf("Qual o seu sexo [H/M]: ");
    scanf("%c", &s);

    printf("Digite sua altura: ");
    scanf("%f", &h);

    if ((s==72)||(s==104)){
        printf("Seu peso ideal eh %.2f", (72.7*h)-58.0);
    }

    if ((s==77)||(s==109)){
        printf("Seu peso ideal eh %.2f", (62.1*h)-44.7);
    }
}