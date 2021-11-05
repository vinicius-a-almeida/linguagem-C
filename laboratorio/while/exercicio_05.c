#include <stdio.h>
#include <stdlib.h>

int main (){
    int num=0, num1=0, i=0, soma_num=0, maio=0, meno=0, par=0, imp=0, mult=0;
    printf("digite um número inteiro: ");
    scanf("%d", &num);
    meno=num;maio=num;
    while(num1==0){
        if(num<=0){
            printf("\na média de todos os números inseridos é %d\n", soma_num/i);
            printf("\no maior número inserido foi %d e o menor %d\n", maio, meno);
            printf("\no total de pares foi %d e o total de impares %d\n", par, imp);
            printf("\no total de multiplos de 4 foi %d\n", mult);
            system ("pause");
            return 0;
        }
        i++;
        soma_num=soma_num+num;
        if(num>maio){
            maio=num;
        }if(num%2==0){
            par++;
        }else
            imp++;
        if(num%4==0){
            mult++;
        }if(num<meno){
            meno=num;
        }
        printf("digite um número inteiro: ");
        scanf("%d", &num);
    }
}