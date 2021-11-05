#include <stdio.h>
#include <math.h>

int main (){
    float a, b = 0;
    printf("digite o valor de A: ");
    scanf("%f", &a);
    printf("digite o valor de B: ");
    scanf("%f", &b);
    printf("o valor da hipotenusa e %f", sqrt(pow(a,2)+pow(b,2)));
    return 0;
}