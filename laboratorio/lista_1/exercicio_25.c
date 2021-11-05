#include <stdio.h>

int main (){
    float v = 0;
    printf("digite o valor de um produto: ");
    scanf("%f", &v);
    printf("o novo valor do seu produto e %.2f", v-v*0.12);
    return 0;
}