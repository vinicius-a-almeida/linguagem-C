#include <stdio.h>
#include <stdlib.h>

int main (){
    int n ,i;
    printf("digite um número inteiro e positivo: ");
    scanf("%i", &n);
    for(i=0;i<=n;i++){
        printf("%d\n", i);
    }
    system ("pause");
    return 0;
}