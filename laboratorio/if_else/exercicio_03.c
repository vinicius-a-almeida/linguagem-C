#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1 = 0, num2 = 0, num3 = 0;
    printf("digite o primeiro número: ");
    scanf("%d", &num1);
    printf("digite o sugundo número: ");
    scanf("%d", &num2);
    printf("digite o terceiro número: ");
    scanf("%d", &num3);
    if(num1 + num2 == num3){
        printf("\na soma do primeiro valor com o segundo é igual ao terceiro\n\n");
    }else
        printf("\na soma do primeiro valor com o segundo não é o terceiro\n\n");
    system ("pause");
    return  0;
}