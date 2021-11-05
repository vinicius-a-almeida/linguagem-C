#include <stdio.h>
#include <stdlib.h>

int main (){
    int i,n;
    float soma;
    for(i=1;i<=10;i++){
        printf("digite o %dº número: ", i);
        scanf("%d", &n);
        soma = soma + n;
    }
    printf("a méda dos números digitados é %.1f\n", soma/10);
    system("pause");
    return 0;
}