#include <stdio.h>
#include <stdlib.h>

int main (){
    int i;
    float vet[5];
    for(i=0;i<5;i++){
        printf("digite o %d número: ", i+1);
        scanf("%d", &vet[i]);
    }
    for(i=0;i<5;i++){
        if(vet[i]<0){
            vet[i]=0;
        }
    }
    for(i=0;i<5;i++){
        printf("vet[%d] = %d\n", i, vet[i]);
    }

}