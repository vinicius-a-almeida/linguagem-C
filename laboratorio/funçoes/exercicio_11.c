#include <stdio.h>
#include <stdlib.h>

int area (int r);
int vol (int r);
int main (){
    float n1, ret_area, ret_vol;
    printf("digite o valor do raio: ");
    scanf("%f", &n1);
    ret_area = area (n1);
    ret_vol = vol (n1);
    printf("a area da superficie é %.0f\n", ret_area);
    printf("a area o volume é %.0f\n", ret_vol);
    system ("pause");
    return 0;
}
int area (int r){
    float a, pi=3.14159;
    a = 4*pi*(r*r);
    return (a);
}
int vol(int r){
    float v, pi=3.14159;
    v = 4/3*pi*(r*r*r);
    return (v);
}