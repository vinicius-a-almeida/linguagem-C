#include <stdio.h>
#include <stdlib.h>

int main (){
    int i,n;
    float soma;
    printf("digite um número inteiro: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            soma = soma + n/i;
        }
    }
    printf("a soma de todos os divisores de %d é %.0f\n", n, soma-n);
    system("pause");
    return 0;
}