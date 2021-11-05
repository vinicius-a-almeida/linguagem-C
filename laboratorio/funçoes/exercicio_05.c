#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b);
int main (){
    int n1, n2, res;
    printf("digite 2 números\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    res=soma(n1,n2);
    printf("a soma dos números entre %d e %d é %d", n1, n2, res);
    system("pause");
    return 0;
}
int soma(int a, int b){
    int i, soma=0;
    if(a<b){
        for(i=a+1;i<=b-1;i++){
        soma = soma + i;
    }
    }else{
        for(i=b+1;i>=a-1;i--){
        soma = soma + i;
    }
    }
    return (soma);
}