#include <stdio.h>

int main (){
    float v1 = 0;
    printf("digite uma temperatura em graus kelvin: ");
    scanf("%f", &v1);
    printf("sua temperatura em celsius e %.2f", v1-273.15);
    return 0;
}