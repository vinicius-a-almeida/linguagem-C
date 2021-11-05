#include <stdio.h>

int main (){
    int valor1 = 0;
    printf("digite um numero ");
    scanf("%d", &valor1);
    printf("o seu antecessor e %d e seu sucessor e %d", valor1-1, valor1+1);
    return 0;
}