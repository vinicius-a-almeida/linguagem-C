#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, n;
    char nome[20];
    for(i=1;i<=12;i++){
        printf("digite o nome do cliente: ");
        scanf("%s",nome);
        printf("digite o valor das compras do ano passado: ");
        scanf("%d", &n);
        if(n>=3000){
            printf("parabens %s, você recebeu um desconto de R$ %.2f\n", nome, n*0.10);
        }
    }
    system("pause");
    return 0;
}