#include <stdio.h>

int main (){
    float a = 0;
    int cont = 2;
    printf("digite o valor do produto: ");
    scanf("%f", &a);
    printf("valor a vista R$ %.2f\n", a-(a*0.10));
    printf("a comisao do vendedor a vista e de R$ %.2f\n\n", (a-(a*0.10))*0.05);
    while (cont <= 10){
    printf("parcelado em %dx cada parcela tem o valor de R$ %.2f\n", cont, a/cont);
    printf("a comissao do vendedor e de R$ %.2f\n\n", a*0.03);
    cont = cont + 2;
    }
    return 0;
}