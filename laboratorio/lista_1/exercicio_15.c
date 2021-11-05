#include <stdio.h>

int main (){
    float km = 0; 
    printf("digite uma velocidade em km/h ");
    scanf("%f", &km);
    printf("sua velocidade em m/s e %.2f", km/36);
    return 0;
}