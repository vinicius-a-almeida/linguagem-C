#include <stdio.h>
#include <stdlib.h>

int func(int n,  int *valores); //função para retornar o maior e menor valor
int main (){
    int valores[10], i, val, maio, meno;
    for(i=0;i<=9;i++){
        printf("digite o %d número: ", i+1);
        scanf("%d", &valores[i]); //vetor coletar números
    }
    val=func(10,valores);
    maio = val[1];
    meno = val[0];
    printf("o maior valor é %d e o menor valor é %d\n", meno, maio);
    system ("pause");
    return 0;
}
int func(int n,  int *valores){
    int i, val[2], *array;
    val[1]=valores[0]; //maior valor
    val[0]=valores[0]; //menor valor
    for(i=0;i<n;i++){
        if(valores[i]>val[1]){
            val[1]=valores[i];
        }
        if(valores[i]<val[0]){
            val[0]=valores[i];
        }
    }
    array = val;
    return (*array);
}