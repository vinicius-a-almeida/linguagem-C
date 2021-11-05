#include <stdio.h>
#include <stdlib.h>

int maio(int a, int b);
int main (){
    int n1, n2, res;
    printf("digite o primeiro número: ");
    scanf("%d", &n1);
    printf("digite o segundo número: ");
    scanf("%d", &n2);
    res=maio(n1,n2);
    printf("o maior número digitado é: %d", res);
    system("pause");
    return 0;
}
int maio (int  a, int b){
    if(a>b){
        return (a);
    }else{
        return (b);
    }
}