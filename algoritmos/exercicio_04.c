#include <stdio.h>
#include <stdlib.h>

void mult (int i);
int main (){
    int n;
    printf("digite um número: ");
    scanf("%d", &n);
    mult(n);
    system("pause");
    return 0;
}
void mult (int i){
    if(i%5==0){
        printf("o número %d é multiplo de 5\n", i);
    }else
        printf("o número %d não é multiplo de 5\n", i);
}