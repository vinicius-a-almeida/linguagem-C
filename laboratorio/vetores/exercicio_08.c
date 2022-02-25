#include <stdio.h>
#include <stdlib.h>

int main (){
    int n[10], m[10], i, p=0;
    for(i=0;i<=9;i++){
        printf("digite o %d número: ", i+1);
        scanf("%d", &n[i]);
    }
    for(i=0;i<=9;i++){
        printf("digite o %d número: ", i+1);
        scanf("%d", &m[i]);
    }
    for(i=0;i<=9;i++){
        p=n[i]*m[i] + p;
    }
    printf("o produto escalar é %d", p);
    system ("pause");
    return 0;
}