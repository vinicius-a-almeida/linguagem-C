#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float num = 0;
    printf("digite um número: ");
    scanf("%f", &num);
    if(num>0){
        printf("\no número %.0f ao quadrado é %.1f\n\n", num, pow(num,2));
        printf("\na raiz quadrada do número %.0f é %.1f\n\n", num, sqrt(num));
    }else
        printf("\n%f\n\n", num);
    system ("pause");
    return 0;
}