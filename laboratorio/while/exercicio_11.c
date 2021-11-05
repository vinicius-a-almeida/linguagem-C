#include <stdio.h>
#include <stdlib.h>

int main (){
    int cod=0, prest=0, i=1;
    float comp=0;
    printf("digite o código de cliente: ");
    scanf("%d", &cod);
    printf("digite o valor total da compra: ");
    scanf("%f", &comp);
    printf("digite o total de prestações: ");
    scanf("%d", &prest);
    while(prest>=i){
        comp = comp + (comp*0.04);
        i++;
    }
    printf("\no valor total de seu financiamento é R$%.2f\n\n", comp);
    system ("pause");
    return 0;
}