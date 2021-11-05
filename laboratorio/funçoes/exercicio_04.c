#include <stdio.h>
#include <stdlib.h>

int soma_pares (int a);
int main (){
    int n, res;
    printf("digite quantos números naturais tu quer ver: ");
    scanf("%d", &n);
    res=soma_pares(n);
    printf("a soma dos %d primeiros números naturais é %d\n", n, res);
    system("pause");
    return 0;
}
int soma_pares (int a){
    int i, soma=0;
    for(i=0;i<=a;i++){
        if(i%2==0){
            soma = soma + i;
        }
    }
    return (soma);
}