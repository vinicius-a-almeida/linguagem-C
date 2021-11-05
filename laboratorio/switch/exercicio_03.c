#include <stdio.h>
#include <stdlib.h>

int main (){
    float num = 0;
    printf("digite um número: ");
    scanf("%f", &num);
    num >=0 ? printf("\nseu número é positivo\n\n") : printf("\nseu número é negativo\n\n");
    system ("pause");
    return 0;
}