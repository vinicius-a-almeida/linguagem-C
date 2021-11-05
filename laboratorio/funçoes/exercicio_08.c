#include <stdio.h>
#include <stdlib.h>

int fibbo(int n);
int main (){
    int n;
    printf("digite quantos termos da sequencia de fibonnaci quer ver: ");
    scanf("%d", &n);
    fibbo(n);
}
int fibbo(int n){
    int a=0,b=1, c,i;
    for(i=1;i<=n;i++){
        printf("%d\n", a);
        c=a+b;
        a=b;
        b=c;
    }
}