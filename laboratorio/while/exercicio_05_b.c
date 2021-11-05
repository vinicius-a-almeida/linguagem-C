#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int num=0, num1=0, i,c;
    while (num1==0){
        printf("digite um número: ");
        scanf("%d", &num);
        if(num<=0){
            system ("pause");
            return 0;
        }else
        i=1;c=0;
        while(i<=num){
            if(num%i==0){
                c++;
            }
                i++;
            }
            if(c>2){
                printf("\nseu número não é primo\n\n");
            }else
                printf("\nseu número é primo\n\n");
    }
}