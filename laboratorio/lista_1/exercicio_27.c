#include <stdio.h>

int main (){
    float vh, h = 0;
    printf("digite o valor da hora de trabalho: ");
    scanf("%f", &vh);
    printf("digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &h);
    printf("o seu valor a ser pago sera de R$ %.2f ", vh*h*0.10+vh*h);
    return 0;
}