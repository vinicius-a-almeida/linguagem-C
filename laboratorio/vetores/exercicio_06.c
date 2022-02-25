#include <stdio.h>
#include <stdlib.h>

int main (){
    int vet[15], i, par=0, mult=0;
    for(i=0;i<15;i++){
        printf("digite o %d número: ", i+1);
        scanf("%d", &vet[i]);
    }
    for(i=0;i<15;i++){
        if(vet[i]%2==0){
            par++;
        }if(vet[i]%4==0){
            mult++;
        }
    }
    printf("existem %d números pares e %d multiplos de 4\n", par, mult);
    system ("pause");
    return 0;
}