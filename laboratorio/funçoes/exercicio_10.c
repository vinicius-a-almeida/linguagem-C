#include <stdio.h>
#include <stdlib.h>

int circulo(int r);
int area(int r);
int main (){
    int n1=0, i=0, ret_area, ret_circ;
    while (i==0){
    printf("digite o raio: ");
    scanf("%d", &n1);
    if(n1<0){
        return 0;
    }
    ret_area = area(n1);
    printf("a area é de %d\n", ret_area);
    ret_circ = circulo(n1);
    printf("a circuferenica do circulo é : %d\n", ret_circ);
    }
    system ("pause");
    return 0;
}
int area (int r){
    int a, pi=3.14159;
    a = pi * (r*r);
    return (a);
}
int circulo(int r){
    int c, pi=3.14159;
    c = 2*pi*r;
    return (c);
}