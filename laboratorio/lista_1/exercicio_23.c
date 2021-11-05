#include <stdio.h>

int main (){
    float alt, rai = 0;
    printf("digite a altura do cilindro: ");
    scanf("%f", &alt);
    printf("digite o raio do cilindro: ");
    scanf("%f", &rai);
    printf("o volume do cilindro circular e %f", 3.141592*(rai*rai)*alt);
    return 0;
}