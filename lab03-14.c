#include <stdio.h>

void main() {
    float tl, as, ef, m;

    printf("Nota do trabalho de laboratorio: ");
    scanf("%f", &tl);

    if ((tl>=0)&&(tl<=10)) {

        printf("Nota da avaliacao semestral: ");
        scanf("%f", &as);

        if ((as>=0)&&(as<=10)) {
            
            printf("Nota do exame final: ");
            scanf("%f", &ef);

            if ((ef>=0)&&(ef<=10)) {
        
                m = ((tl*2)+(as*3)+(ef*5))/10;

                printf("Sua media foi de %.2f\n", m);
                
                if (m<3.0) {
                    printf("REPROVADO!");
                }

                if ((m>=3.0)&&(m<5)) {
                    printf("RECUPERACAO");
                }

                if (m>=5) {
                    printf("APROVADO!!");
                }
 
            }
            else {
                printf("Nota invalida");
            }
        }
        else {
            printf("Nota invalida");
        }
    }
    else {
        printf("Nota invalida");
    }
}