#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dist (int n1, int n2, int a1, int a2);
int main (){
    int x1, x2, y1, y2;
    float ret;
    printf("digite o ponto x1: ");
    scanf("%d", &x1);
    printf("digite o ponto x2: ");
    scanf("%d", &x2);
    printf("digite o ponto y1: ");
    scanf("%d", &y1);
    printf("digite o ponto y2: ");
    scanf("%d", &y2);
    ret = dist(x1,x2,y1,y2);
    printf("a distancia entre os pontos é %.2f", ret);
    system ("pause");
    return 0;
}
int dist (int n1, int n2, int a1, int a2){
    float d;
    d = sqrt(pow(n1,2) - pow(n2,2) + pow(a1,2) - pow(a2,2));
    return (d);
}