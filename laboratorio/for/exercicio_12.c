#include <stdio.h>
#include <stdlib.h>

int main (){
    int sex,i,idd, soma_idd=0,idd_h=0, idd1=0;
    float alt, alt_m=0;
    for(i=1;i<=3;i++){
        system("clear || cls");
        printf("pessoa %d\n", i);
        printf("digite [0] feminino e [1] masculino: ");
        scanf("%d", &sex);
        printf("digite sua idade: ");
        scanf("%d", &idd);
        soma_idd = soma_idd + idd;
        printf("digite sua altura: ");
        scanf("%f", &alt);
        if(sex==0){
            alt_m = alt_m + alt;
        }else if(sex==1){
            idd_h = idd_h + idd;
        }
        if(idd>=18&&idd<=35){
            idd1++;
        }
    }
    printf("a média de idade do grupo é %d\n", soma_idd/3);
    printf("a média de altura das mulheres é %.2f\n", alt_m/3);
    printf("a média de idade dos homens é %d\n", idd_h);
    printf("o total de pessoas com idade entre 18 e 35 é %d\n", idd1);
    system("pause");
    return 0;
}