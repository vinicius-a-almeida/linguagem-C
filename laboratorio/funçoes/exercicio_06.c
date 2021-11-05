#include <stdio.h>
#include <stdlib.h>

int somadivisiveis (int n1, int n2, int n3);
int main (){
    int a, b, c, res;
    printf("digite 3 números\n");
    do{
    scanf("%d", &a);
    if(a<=1){
        printf("o primeiro número não pode ser igual ou menor que 1\n");
    }
    }while(a<=1);
    system("clear || cls");
    scanf("%d", &b);
    scanf("%d", &c);
    res=somadivisiveis(a,b,c);
    printf("a soma dos números divisiveis por %d entre %d e %d é %d\n", a, b, c, res);
    system("pause");
    return 0;
}
int somadivisiveis (int n1, int n2, int n3){
    int i, soma=0;
    for(i=n2;i<=n3;i++){
        if(i%n1==0){
        soma = soma + i;
        }
    }
    return(soma);
}