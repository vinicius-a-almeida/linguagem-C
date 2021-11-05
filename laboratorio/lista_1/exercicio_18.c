#include <stdio.h>

int main (){
    float v1 = 0;
    printf("digite uma distancia em milhas ");
    scanf ("%f", &v1);
    printf("a distancia em km sera de %.1f", v1*1.61);
    return 0;
}