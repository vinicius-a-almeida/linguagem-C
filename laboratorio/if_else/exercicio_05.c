#include <stdio.h>
#include <stdlib.h>

int main (){
    int num = 0;
    printf("digite quantos livros você comprou: ");
    scanf("%d", &num);
    if(num==1){
        printf("\nvocê ganhou 5 pontos\n\n");
    }else if(num==2){
        printf("\nvocê ganhou 15 pontos\n\n");
    }else if(num==3){
        printf("\nvocê ganhou 30 pontos\n\n");
    }else if(num>3){
        printf("\nvocê ganhou 60 pontos\n\n");
    }else
        printf("\nerror\n\n");
    system ("pause");
    return 0;
}