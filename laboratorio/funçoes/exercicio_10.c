#include <stdio.h>
#include <stdlib.h>

int area(r);
int main (){
    int n1, i=0, ret_area;
    while (i=0){
    printf("digite o raio: ");
    scanf("%d", &n1);
    if(n1<0){
        return 0;
    }
    ret_area = area(n1);
    printf("a area é'de %i");
    }
}
int area (r){
    int a, pi=3.14159;
    a = pi * (r*r);
    return (a);
}