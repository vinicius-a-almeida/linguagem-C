#include <stdio.h>

int main (){
    int valor1, valor2, valor3 = 0;
    printf("digite 3 valores\n");
    scanf("%d%d%d", &valor1, &valor2, &valor3);
    printf("a soma dos valores e %d", valor1 + valor2 + valor3);
    return 0;
}