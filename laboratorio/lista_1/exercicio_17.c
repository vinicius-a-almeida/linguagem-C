#include <stdio.h>

int main (){
    float v1 = 0;
    printf("digite uma velocidade em m/s ");
    scanf("%f", &v1);
    printf("sua velocidade em km/h e %.1f", v1*3.6);
    return 0;
}