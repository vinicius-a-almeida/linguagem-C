#include <stdio.h>
#include <stdlib.h>

int main (){
    int cat=0;
    float prec=0;
    printf("digite o preço do produto: ");
    scanf("%f", &prec);
    printf("digite a categoria do produto: ");
    scanf("%d", &cat);
    if(prec>25){
        switch(cat){
            case(1):
                printf("\no novo valor do produto é R$ %.2f\n\n", prec+(prec*0.12));
            break;
            case(2):
                printf("\no novo valor do produto é R$ %.2f\n\n", prec+(prec*0.15));
            break;
            case(3):
                printf("\no valor do produto é R$ %.2f\n\n", prec+(prec*0.18));
            default:
                printf("\nerror\n\n");
    }
    }else{
        switch(cat){
            case(1):
                printf("\no valor do produto é R$ %.2f\n\n", prec+(prec*0.05));
            break;
            case(2):
                printf("\no valor do produto é R$ %.2f\n\n", prec+(prec*0.08));
            break;
            case(3):
                printf("\no valor do produto é R$ %.2f\n\n", prec+(prec*0.10));
            break;
            default:
                printf("\nerror\n\n");
        }
    }
    system("pause");
    return 0;
}