#include <stdio.h>
#include <math.h>
int main (){
    float a, b = 0;
    printf("digite um numero: ");
    scanf("%f", &a);
    printf("digite outro valor: ");
    scanf("%f", &b);
    printf("a soma dos numeros e %.0f\n", a+b);
    printf("O produto do primeiro numero pelo quadrado do segundo e %f\n", a*pow(b,2));
    printf("O quadrado do primeiro numero: %.0f\n", pow(a,2));
    printf("A raiz quadrada do primeiro numero %f, a raiz quadrada do segundo numero %f\n", sqrt(a), sqrt(b));
    printf("O seno da diferenca do primeiro numero pelo segundo %f\n", sin(a-b));
    printf("O modulo do primeiro numero %f", abs(a));
}