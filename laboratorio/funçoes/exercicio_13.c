#include <stdio.h>
#include <stdlib.h>

int func_maio(int n,  int *valores);
int func_meno(int n, int *valores);
int main (){
    int maio, meno, valores[10], i;
    for(i=0;i<=9;i++){
        printf("digite o %d número: ", i+1);
        scanf("%d", &valores[i]);
    }
    maio=func_maio(10,valores);
    meno=func_meno(10,valores);
    printf("o maior valor é %d e o menor valor é %d", maio, meno);
    system ("pause");
    return 0;
}
int func_maio(int n,  int *valores){
    int i, maio;
    maio=valores[0];
    for(i=0;i<n;i++){
        if(valores[i]>maio){
            maio=valores[i];
        }
    }
    return (maio);
}
int func_meno(int n,  int *valores){
    int i, meno;
    meno=valores[0];
    for(i=0;i<n;i++){
        if(valores[i]<meno){
            meno=valores[i];
        }
    }
    return (meno);
}