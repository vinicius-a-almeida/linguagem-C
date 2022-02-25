#include <stdio.h>
#include <stdlib.h>

int main (){
    int vet[10], par[10], imp[10], i;
    for(i=0;i<=9;i++){
        par[i]=0;
        imp[i]=0;
    }
    for(i=0;i<=9;i++){
        printf("digite o %d número: ", i+1);
        scanf("%d", &vet[i]);
        if(vet[i]%2==0){
            par[i]=vet[i];
        }if(vet[i]%2!=0){
            imp[i]=vet[i];
        }
    }
    printf("os números pares são: \n");
    for(i=0;i<=9;i++){
        if(par[i]!=0){
            printf("%d\n", par[i]);
        }
    }
    printf("os números impares são: \n");
    for(i=0;i<=9;i++){
        if(imp[i]!=0){
            printf("%d\n", imp[i]);
        }
    }
    system("pause");
    return 0;
}