#include <stdio.h>
#include <stdlib.h>

int circulo(int r);
int area(int r);
int main (){
    int i=0;
    float ret_area, ret_circ, n1;
    while (i==0){
    printf("digite o raio: ");
    scanf("%f", &n1);
    if(n1<0){
        return 0;
    }
    ret_area = area(n1);
    printf("a area é de %.0f\n", ret_area);
    ret_circ = circulo(n1);
    printf("a circuferenica do circulo é : %.0f\n", ret_circ);
    }
    system ("pause");
    return 0;
}
int area (int r){
    float a, pi=3.14159;
    a = pi * (r*r);
    return (a);
}
int circulo(int r){
    float c, pi=3.14159;
    c = 2*pi*r;
    return (c);
}