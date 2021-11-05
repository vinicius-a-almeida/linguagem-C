#include <stdio.h>
#include <stdlib.h>

int main (){
    int num = 0;
    printf("digite um número: ");
    scanf("%d", &num);
    if(num%2==0){
        printf("\nseu número é par\n\n");
    }else
        printf("\nseu número é impar\n\n");
    system ("pause");
    return 0;
}