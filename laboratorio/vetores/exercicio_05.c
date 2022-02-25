#include <stdio.h>
#include <stdlib.h>

int main (){
    int vet[40], i, par=0, imp=0;
    for(i=0;i<40;i++){
        printf("digite o %d número: ", i+1);
        scanf("%d", &vet[i]);
    }
    for(i=0;i<40;i++){
        if(vet[i]%2==0){
            par++;
        }if(vet[i]%2!=0){
            imp++;
        }
    }
    printf("existem %d números pares e %d números impares", par, imp);
    system ("pause");
    return 0;
}
