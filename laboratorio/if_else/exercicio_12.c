#include <stdio.h>
#include <stdlib.h>

int main (){
    float val = 0;
    int est = 0;
    printf("digite o valor do produto: ");
    scanf("%f", &val);
    printf("escolha o estado:\n[1] minas gerais\n[2] são paulo\n[3] rio de janeiro\n[4] mato grosso\n");
    scanf("%d", &est);
    if(est==1){
        printf("\no preço final é R$ %.2f\n\n", val+(val*0.07));
    }else if(est==2){
        printf("\no preço final é R$ %.2f\n\n", val+(val*0.12));
    }else if(est==3){
        printf("\no preço final é R$ %.2f\n\n", val+(val*0.15));
    }else if(est==4){
        printf("\no preço final é R$ %.2f\n\n", val+(val*0.08));
    }else
        printf("\nerror\n\n");
    system ("pause");
    return 0;
}