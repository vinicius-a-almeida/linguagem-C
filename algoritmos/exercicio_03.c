#include <stdio.h>
#include <stdlib.h>

int ret (int a, int b);

int main (){
    int x,y, res;
    printf("digite um número: ");
    scanf("%d", &x);
    printf("digite outro número: ");
    scanf("%d", &y);
    res = ret(x,y);
    printf("o maior valor é %d\n", res);
}

int ret (int a, int b){
    int res;
    if(a>b){
        res = a;
        return (res);
    }else
        res = b;
        return (res);
}