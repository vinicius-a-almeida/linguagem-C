#include <stdio.h>
#include <stdlib.h>

void calc();
int main (){
    calc();
    system("pause");
    return 0;
}
void calc(){
    int n=0, i=-1;
    float soma=0;
    do{
        soma= soma+n;
        printf("digite um número: ");
        scanf("%d", &n);
        if(n!=0){
        i++;
        }
    }while(n>=0);
    printf("a média dos valores positivios digitados é %.1f", soma/i);
}   