#include <stdio.h>

int main (){
    int v1 = 0;
    printf("digite um valor em metros cubicos: ");
    scanf("%d", &v1);
    printf("seu valor em litros e %d", v1*1000);
    return 0;
}