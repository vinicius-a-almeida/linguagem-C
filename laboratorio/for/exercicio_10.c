#include <stdio.h>
#include <stdlib.h>

int main (){
    int i,n=0;
    for(i=1;i<=1000;i++){
        if(i%3==0 || i%5==0){
            n = n + i;
        }
    }
    printf("a soma de todos os números multiplos de 3 e 5 abaixo de 1000 é %d\n", n);
    system ("pause");
    return 0;
}