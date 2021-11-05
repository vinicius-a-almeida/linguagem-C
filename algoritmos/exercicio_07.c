#include <stdio.h>
#include <stdlib.h>

void qualquer_coisa (int a, int b, int c);
int main (){
    int x,y,z;
    printf("digite o primeiro valor: ");
    scanf("%d", &x);
    printf("digite o segundo valor: ");
    scanf("%d", &y);
    printf("digite o terceiro valor: ");
    scanf("%d", &z);
    qualquer_coisa (x,y,z);
    return 0;
}
void qualquer_coisa (int a, int b, int c){
    if(a>b && b>c){
        printf("%d\n", c);
        printf("%d\n", b);
        printf("%d\n", a);
    }else if(a>b && c>b){
        printf("%d\n", b);
        printf("%d\n", a);
        printf("%d\n", c);
    }else if(c>a && a>b){
        printf("%d\n", c);
        printf("%d\n", a);
        printf("%d\n", b);       
    }else if(b>a && a>c){
        printf("%d\n", b);
        printf("%d\n", a);
        printf("%d\n", c);
    }else if(b>a && c>a){
        printf("%d\n", a);
        printf("%d\n", c);
        printf("%d\n", b);
    }
}