#include <stdio.h>
#include <stdlib.h>

int main (){
    int i,n;
    printf("digite um número inteiro e positivo: ");
    scanf("%d", &n);
    for(i=n;i>=0;i--){
        printf("%d\n", i);
    }
    system("pause");
    return 0;
}