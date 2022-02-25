#include <stdio.h>
#include <stdlib.h>

int par(int num, int *n);
int prim(int num, int *n);
int main (){
    int *n;
    int i, num;
    printf("digite o tamanho do vetor: ");
    scanf("%d", &num);
    n = (int *) malloc(num * sizeof(int));
    for(i=0;i<num;i++){
        printf("digite o %d número: ", i+1);
        scanf("%d", &n[i]);
    }
    par(num, n);
    prim(num, n);
    printf("estão armazenados %d números pares\n", par(num, n));
    printf("estão armazenados %d números primos\n", prim(num, n));

}
int par(int num, int *n){
    int i, pa=0;
    for(i=0;i<num;i++){
        if(n[i]%2==0){
            pa++;
        }
    }
    return (pa);
}
int prim(int num, int *n){
    int i, c, primo, primo_2=0;
    for(i=0;i<num;i++){
        primo=0;
        for(c=1;c<=n[i];c++){
            if(n[i]%c==0){
                primo++;
            }
        }
        if(primo<=2 && n[i]!=1){
            primo_2++;
        }
    }
    return (primo_2);
}