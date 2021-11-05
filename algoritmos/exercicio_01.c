#include <stdio.h>
#include <stdlib.h>

void comp (int i);
int main (){
    int n;
    printf("digite um valor: ");
    scanf("%d", &n);
    comp(n);
    system ("pause");
    return 0;
}
void comp (int i){
    if(i<0){
        printf("o número é negativo\n");
    }else if(i>0){
        printf("o número é positivo\n");
    }else
        printf("o número é neutro\n");
}