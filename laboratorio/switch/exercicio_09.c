#include <stdlib.h>
#include <stdio.h>

int main (){
    int esc=0;
    float val=0;
    printf("digite o valor do produto: ");
    scanf("%f", &val);
    printf("digite [1] para pagamento à vista e [2] para pagamentos à prazo: ");
    scanf("%d", &esc);
    switch(esc){
        case(1):
            printf("\no valor final de seu produto é R$ %.2f\n\n", val-(val*0.10));
        break;
        case(2):
            printf("\no valor final de seu produto é R$ %.2f\n\n", val+(val*0.10));
        break;
    }
    system("pause");
    return 0;
}