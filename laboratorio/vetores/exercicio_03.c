#include <stdio.h>
#include <stdlib.h>

int main (){
    int vet[10], i, num, quant=0;
    for(i=0;i<=9;i++){
        printf("digite o %d número: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("digite um número: ");
    scanf("%d", &num);
    for(i=0;i<=9;i++){
        if(vet[i]<num){
            quant=quant+1;
        }
    }
    printf("a quantidade de números no vetor abaixo de %d é %d\n", num, quant);
    system ("pause");
    return 0;
}