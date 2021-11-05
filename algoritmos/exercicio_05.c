#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float rai(float a);
int main (){
    float n, raio;
    printf("digite o valor do raio: ");
    scanf("%f", &n);
    raio = rai(n);
    printf("o valor do raio é %.2f", raio);
}
float rai(float a){
    float b;
    b =  M_PI*pow(a,2);
    return (b);
}