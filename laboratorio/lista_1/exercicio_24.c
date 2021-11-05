#include <stdio.h>

int main (){
    float t, p = 0;
    printf("digite o tempo que o produto permanece ligado em horas por mes: ");
    scanf("%f", &t);
    printf("digite a potencia em watts do aparelho: ");
    scanf("%f", &p);
    printf("o calculo aproximado de quanto o seu aparelho gasta e %.3f", t*p/1000);
    return 0;
}