#include <stdio.h>
#include <stdlib.h>

int velo (int dist, int temp);
int main (){
    int dist, temp;
    printf("digite a distancia: ");
    scanf("%d", &dist);
    printf("digite o tempo: ");
    scanf("%d", &temp);
    velo (dist, temp);
    printf("a velocidade é %d\n", velo (dist, temp));
}
int velo (int dist, int temp){
    int velo2;
    velo2 = (dist*1000)/(temp*60);
    return (velo2);
}