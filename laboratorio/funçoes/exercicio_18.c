#include <stdio.h>
#include <stdlib.h>

int perf (int n);
int main (){
    int n, res;
    printf("digite um número: ");
    scanf("%d", &n);
    res = perf (n);
    if(res == n){
    printf("seu número é perfeito\n");
    }else{
        printf("seu número não é perfeito\n");
    }
    system ("pause");
    return 0;
}
int perf (int n){
    int i=1, soma=0;
    while(soma < n){
        soma = i + soma;
        i++;
    }
    return (soma);
}