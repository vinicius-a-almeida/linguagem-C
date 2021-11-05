#include <stdio.h>

int main (){
    float v1 = 0;
    printf("digite um valor em metros quadrados: ");
    scanf("%f", &v1);
    printf("seu valor em hectares e %f", v1*0.0001);
    return 0;
}