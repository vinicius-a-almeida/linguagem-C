#include <stdio.h>
#include <stdlib.h>

void parouimp (int n);
int main (){
    int a;
    printf("digite um número: ");
    scanf("%d", &a);
    parouimp(a);
    system("pause");
    return 0;
}
void parouimp (int n){
    if(n%2==0){
        printf("seu número é par\n");
    }else{
        printf("seu número é impar\n");
    }
}