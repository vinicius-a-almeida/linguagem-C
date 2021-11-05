#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 0;
    printf("digite um número: ");
    scanf("%d", &num);
    num %2==0 ? printf("\no número é par\n\n"): printf("\no número é impar\n\n");
    system ("pause");
    return 0;
}