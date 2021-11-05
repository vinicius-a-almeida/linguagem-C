#include <stdio.h>
#include <stdlib.h>

float caixa (float x, float y, float z);
int main (){
    float a,b,c, volume;
    printf("digite o valor do comprimento: ");
    scanf("%f", &a);
    printf("digite o valor do comprimento: ");
    scanf("%f", &b);
    printf("digite o valor do comprimento: ");
    scanf("%f", &c);
    volume = caixa(a,b,c);
    printf("o volume é %.1f", volume);
}
float caixa (float x, float y, float z){
    float volume;
    volume = x*y*z;
    return(volume);
}