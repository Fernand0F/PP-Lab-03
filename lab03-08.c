#include <stdio.h>

void main() {
    float n1, n2;

    printf("Nota 01: ");
    scanf("%f", &n1);

    if ((n1>=0)&&(n1<=10)) {
        printf("Nota 02: ");
        scanf("%f", &n2);

        if ((n2>=0)&&(n2<=10)) {
            printf("A media das notas eh %.2f", (n1+n2)/2);
        }
        else{
            printf("Nota invalida");
        }
    }
    else{
        printf("Nota invalida");
    }
}