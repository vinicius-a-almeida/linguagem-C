#include <stdio.h>

int main (){
    float v1 = 0;
    printf("digite um valor em polegadas ");
    scanf("%f", &v1);
    printf("seu comprimento em centimetros e %.1f", v1*2.54);
    return 0;
}