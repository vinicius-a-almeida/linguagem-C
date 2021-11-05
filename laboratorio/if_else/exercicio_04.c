#include <stdio.h>
#include <stdlib.h>

int main (){
    int num = 0;
    printf("digite um número entre 1 e 7 para representar um dia da semana: ");
    scanf("%d", &num);
    if(num==1){
        printf("\ndomingo\n\n");
    }else if(num==2){
        printf("\nsegunda\n\n");
    }else if(num==3){
        printf("\nterça\n\n");
    }else if(num==4){
        printf("\nquarta\n\n");
    }else if(num==5){
        printf("\nquinta\n\n");
    }else if(num==6){
        printf("\nsexta\n\n");
    }else if(num==7){
        printf("\nsabado\n\n");
    }else
        printf("\nerror\n\n");
    system ("pause");
    return 0;
}