#include <stdio.h>
#include <stdlib.h>

void esc (int i);
int main (){
    int n;
    printf("digite um número: ");
    scanf("%d", &n);
    esc;
    system("pause");
    return 0;
}
void esc (int i){
    if(i%2==0){
        printf("o número é par");
    }else
        printf("o número é impar");
}