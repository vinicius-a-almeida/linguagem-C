#include <stdio.h>
#include <stdlib.h>

int maio_meno(int a, int *vet);
int par(int a, int *vet);
int imp (int a, int *vet);
int main (){
    int vet[10], i;
    for(i=0;i<10;i++){
        printf("digite o %d número: ", i+1);
        scanf("%d", &vet[i]);
    }
    maio_meno(10, vet);
    par(10, vet);
    printf("a diferença entre o maior e o menor número digitado é %d\n", maio_meno(10, vet));
    printf("o número de valores pares é %d e ímpares é %d\n", par(10, vet), imp (10, vet));
    system ("pause");
    return 0;

}
int maio_meno(int a, int *vet){
    int i, meno, maio, dif;
    meno=vet[0];
    maio=vet[0];
    for (i=0;i<a;i++){
        if(vet[i]>maio){
            maio=vet[i];
        }if(vet[i]<meno){
            meno=vet[i];
        }
    }
    dif = maio-meno;
    return(dif);
}
int par(int a, int *vet){
    int i, j=0;
    for(i=0;i<a;i++){
        if(vet[i]%2==0){
            j++;
        }
    }
    return (j);
}
int imp (int a, int *vet){
    int i, j=0;
    for(i=0;i<a;i++){
        if(vet[i]%2!=0){
            j++;
        }
    }
    return (j);
}