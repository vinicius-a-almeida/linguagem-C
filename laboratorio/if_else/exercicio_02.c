#include <stdlib.h>
#include <stdio.h>

int main (){
    int num1 = 0, num2 = 0;
    printf("digite um número: ");
    scanf("%d", &num1);
    printf("digite outro número: ");
    scanf("%d", &num2);
    if(num1>num2){
        printf("\no maior número é %d\n\n", num1);
    }else if(num2>num1){
        printf("\no maior número é %d\n\n", num2);
    }else
        printf("\nos números são iguais\n\n");
    system ("pause");
    return 0;
}