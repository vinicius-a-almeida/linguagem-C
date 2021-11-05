#include <stdio.h>
#include <stdlib.h>

int main (){
    float num = 0;
    printf("digite um número: ");
    scanf("%f", &num);
    num >=8.8 ? printf("\nseu número é maior que 8,8\n\n") : printf("\nseu número é menor que 8,8\n\n");
    system ("pause");
    return 0;
}