#include <stdio.h>
#include <stdlib.h>

int main (){
    int num = 0;
    printf("digite um número: ");
    scanf("%d", &num);
    num != 4 ? printf("\nseu número é diferente de 4\n\n") : printf("\nseu número é igual a 4\n\n");
    system ("pause");
    return 0;
}