#include <stdio.h>

int main (){
    int d = 0;
    printf("digite a quantidade de dias trabalhados pelo encanador: ");
    scanf("%d", &d);
    printf("sera pago ao encanador R$ %.2f liquidos ", d*30-d*30*0.08);
    return 0;
}