#include <stdio.h>
#include <stdlib.h>

int primo (int a);
int main (){
    int n1, res=0;
    printf("digite um número: ");
    scanf("%d", &n1);
    res=primo(n1);
    if(res>2){
        printf("seu número não é primo\n");
    }else{
        printf("seu número é primo\n");
    }
}
int primo (int a){
    int i, soma=0;
    for(i=1;i<=a;i++){
        if(a%i==0){
            soma++;
        }
    }
    return (soma);
}