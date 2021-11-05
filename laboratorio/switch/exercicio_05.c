#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1 =0, num2=0;
    printf("digite o primeiro número: ");
    scanf("%d", &num1);
    printf("digite o segundo número: ");
    scanf("%d", &num2);
    num1 > num2 ? printf("\no primeiro número é maior que o segundo\n\n") : printf("\no segundo número é maior que o primeiro\n\n");
    system ("pause");
    return 0;
}