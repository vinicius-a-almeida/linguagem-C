#include <stdio.h>
#include <stdlib.h>

int potencia(int n, int a);
int main (){
    int n, a;
    printf("digite um número: ");
    scanf("%d", &n);
    printf("elevado a: ");
    scanf("%d", &a);
    potencia (n, a);
    printf("a potencia é %d\n", potencia (n, a));
}
int potencia(int n, int a){
    int resul=1, i;
    for(i=1;i<=a;i++){
        resul = resul* n;
    }
    return (resul);
}