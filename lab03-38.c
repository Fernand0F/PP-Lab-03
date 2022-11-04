#include <stdio.h>

void main() {
    int d, m, a, md;

    printf("Digite uma Data\n");

    printf("Ano: ");
    scanf("%d", &a);
    printf("Mes: ");
    scanf("%d", &m);
    printf("Dia: ");
    scanf("%d", &d);

    if ((m > 12)||(m < 1)) {
        printf("Data invalida");
    }
    else {
        switch (m) {
            case 1:
                md = 31; break;
            case 2:
                if ((a%4)==0) {
                    md = 29;
                }
                else {
                    md = 28;
                }
            case 3:
                md = 31; break;
            case 4:
                md = 30; break;
            case 5:
                md = 31; break;
            case 6:
                md = 30; break;
            case 7:
                md = 31; break;
            case 8:
                md = 31; break;
            case 9:
                md = 30; break;
            case 10:
                md = 31; break;
            case 11:
                md = 30; break;
            case 12:
                md = 31; break;
        }

        if ((d > md)||(d < 1)) {
            printf("Data invalida");
        }
        else {
            if (a > 2022) {
                printf("Data invalida");
            }
            else {
                printf("Data valida");
            }
        }
    }
}