#include <stdio.h>
#include <stdlib.h>

int main (){
    int vet[10], num, i;
    for(i=0;i<10;i++){
    printf("digite o %d número: ", i+1);
    scanf("%d", &vet[i]);
    }
    printf("digite um número para checar se ele está no vetor: ");
    scanf("%d", &num);
    for(i=0;i<=10;i++){
        if(vet[i]==num){
            printf("o número %d foi digitado na posição %d\n", vet[i], i+1);
        }
    }
    system ("pause");
    return 0;
}