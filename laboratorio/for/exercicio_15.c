#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, n, cont=0;
    printf("digite um número inteiro maior que 1 para verificar se é primo: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            cont++;
        }
    }if(cont<=2){
    printf("seu número é primo\n");
    }else
        printf("seu número não é primo\n");
    system("pause");
    return 0;
}