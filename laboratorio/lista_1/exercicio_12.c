#include <stdio.h>

int main (){
    int v1, v2, v3 = 0;
    printf("digite 3 valores\n");
    scanf("%d%d%d", &v1, &v2, &v3);
    printf("a soma dos quadrados dos numeros digitados e %d", v1*v1+v2*v2+v3*v3);
    return 0;
}