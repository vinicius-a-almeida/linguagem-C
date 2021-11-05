#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "");
    float a=0,b=0,c=0;
    printf("digite o lado A do triangulo: ");
    scanf("%f", &a);
    printf("digite o lado B do triangulo: ");
    scanf("%f", &b);
    printf("digite o lado C do triangulo: ");
    scanf("%f", &c);
    if(a==b+c){
        printf("\ntriangulo retangulo\n\n");
    }else if(a>b+c){
        printf("\ntriangulo obtusangulo\n\n");
    }else if(a<b+c){
        printf("\ntriângulo acutângulo\n\n");
    }else
        printf("\nerror\n\n");
    system ("pause");
    return 0;
}