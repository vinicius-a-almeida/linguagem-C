#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, n, a=0, b=1, c=1;
    printf("digite quantos termos da sequencia de fibo, tu quer ver: ");
    scanf("%d", &n);
    printf("%d\n", a);
    for(i=6;i<=n;i++){
        if(n%1==0 && i==n){
            printf("%d\n",c);
            a = b+c;
            return 0;
        }printf("%d\n",c);
        a = b+c;
        printf("%d\n", b);
        b = a+b;
        c = a;
    }
    system("pause");
    return 0;
}