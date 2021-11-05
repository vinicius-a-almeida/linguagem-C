#include <stdio.h>
#include <stdlib.h>

int main (){
    float alt=0;
    int sex=0, acima_alt_m=0, acima_alt_h=0, abaixo_alt_h=0, abaixo_alt_m=0;
    do{
        printf("digite sua altura: ");
        scanf("%f", &alt);
        if(alt<0){
            printf("\nestão acima da média nacional %d mulheres e estão abaixo %d mulheres\n\n", acima_alt_m, abaixo_alt_m);
            printf("\nestão acima da média nacional %d homens e estão abaixo %d homens\n\n", acima_alt_h, abaixo_alt_h);
            system ("pause");
            return 0;
        }
        printf ("selecione seu sexo [1] homem [2] mulher: ");
        scanf ("%d", &sex);
        if(sex==1 && alt>1.73){
            acima_alt_h++;
        }else if(sex==1 && alt<1.73){
            abaixo_alt_h++;
        }else if(sex==2 && alt>1.60){
            acima_alt_m++;
        }else if(sex==2 && alt<1.60){
            abaixo_alt_m++;
        }
    }while(alt>0);
    }