#include <stdio.h>
#include <stdlib.h>

int main (){
    int i=1, num=0, soma=0;
    printf("digite o número que deseja ver a raiz quadrada exata: ");
    scanf("%d", &num);
    while(num>soma){
        soma = soma + i;
        if(soma>=num){
            printf("%d=%d", i, num);
        }else
            printf("%d+", i);
        i+=2;
    }
    printf("\n");
    system("pause");
    return 0;
}