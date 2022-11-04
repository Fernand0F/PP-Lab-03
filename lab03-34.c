#include <stdio.h>

void main() {
    float nota;
    int faltas;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    printf("Digite seu numero de faltas: ");
    scanf("%d", &faltas);

    if (faltas < 20) {
        if ((nota>=9.0)&&(nota<=10.0)) {
            printf("Conceito: A");
        }
        else if ((nota>=7.5)&&(nota<=8.9)) {
            printf("Conceito: B");
        }
        else if ((nota>=5.0)&&(nota<=7.4)) {
            printf("Conceito: C");
        }
        else if ((nota>=4.0)&&(nota<=4.9)) {
            printf("Conceito: D");
        }
        else if ((nota>=0.0)&&(nota<=3.9)) {
            printf("Conceito: E");
        }
    }
    else {
        if ((nota>=9.0)&&(nota<=10.0)) {
            printf("Conceito: B");
        }
        else if ((nota>=7.5)&&(nota<=8.9)) {
            printf("Conceito: C");
        }
        else if ((nota>=5.0)&&(nota<=7.4)) {
            printf("Conceito: D");
        }
        else if ((nota>=4.0)&&(nota<=4.9)) {
            printf("Conceito: E");
        }
        else if ((nota>=0.0)&&(nota<=3.9)) {
            printf("Conceito: E");
        }
    }
}