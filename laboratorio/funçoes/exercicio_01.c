#include <stdio.h>
#include <stdlib.h>

int verificar (int n);
int main (){
    int a, res;
    printf("digite um número: ");
    scanf("%d", &a);
    res = verificar(a);
    if(res==1){
    printf("seu número é positivo\n");
    }else if(res==-1){
        printf("seu número é negativo\n");
    }else if(res==0){
        printf("seu número é neutro\n");
    }
    system ("pause");
    return 0;
}
int verificar (int n){
    if(n<0){
        return (-1);
    }else if(n>0){
        return (1);
    }else{
        return (0);
    }
}