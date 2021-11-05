#include <stdio.h>

int main (){
    float v1 = 0;
    printf("digite um angulo em graus: ");
    scanf("%f", &v1);
    printf("seu angulo em radianos e %f", v1*(3.141592/180));
    return 0;
}