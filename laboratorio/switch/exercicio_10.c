#include <stdio.h>
#include <stdlib.h>

int main (){
    int cod=0;
    float val=0;
    printf("digite o valor do produto: ");
    scanf("%f", &val);
    printf("digite [1] para cliente comum\n[2] para funcionário\n[3] vip");
    scanf("%d", &cod);
    switch(cod){
    case(1):
        printf("\no valor total do seu produto é R$ %.2f\n\n", val);
    break;
    case(2):
        printf("\no valor total do seu produto é R$ %.2f\n\n", val-(val*0.08));
    break;
    case(3):
        printf("\no valor total do seu produto é R$ %.2f\n\n", val-(val*0.12));
    default:
        printf("\nerror\n\n");
    }
    system("pause");
    return 0;
}