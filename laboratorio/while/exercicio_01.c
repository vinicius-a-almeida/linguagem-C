#include <stdio.h>
#include <stdlib.h>

int main (){
    int num =0, soma=0;
    while (soma<40)
    {
        printf("digite um número: ");
        scanf("%d", &num);
        soma = soma + num;
    }
    system ("pause");
    return 0;
}