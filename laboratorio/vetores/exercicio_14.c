#include <stdio.h>
#include <stdlib.h>

int neg (int n,float *vet);
int main (){
    int i;
    float vet[10];
    for(i=0;i<=9;i++){
        printf("digite o %d número: ", i+1);
        scanf("%f", &vet[i]);
    }
    neg(10, vet);
    printf("foram digitados %d números negativos", neg(10, vet));
}
int neg (int n,float *vet){
    int i, ne=0;
    for(i=0;i<n;i++){
        if(vet[i]<0){
            ne++;
        }
    }
    return (ne);
}
