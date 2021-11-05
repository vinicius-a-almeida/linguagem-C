#include <stdio.h>
#include <stdlib.h>

int main (){
    int a=0, i=0, b=0;
    while(b==0){
        printf("digite um número para mostrar sua tabuada: ");
        scanf("%d", &a);
        i = 0;
        if(a<=0){
            printf("\nfim :)\n\n");
            system ("pause");
            return 0;
        }
        while(i<=10){
            printf("%d x %d = %d\n", a, i, a*i);
            i++;
        }
    }
}