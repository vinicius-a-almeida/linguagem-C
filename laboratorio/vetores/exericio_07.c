#include <stdio.h>
#include <stdlib.h>

int main (){
    int vet[10] = {2, 4, 35, 50, 23, 17, 9, 12, 27, 5}, i, maio,soma=0;
    maio=vet[0];
    for(i=0;i<10;i++){
        if(vet[i]>maio){
            maio=vet[i];
        }
        soma=vet[i]+soma;
    }
    printf("o maior valor é %d e a média é %d\n", maio, soma/10);
    system ("pause");
    return 0;
}