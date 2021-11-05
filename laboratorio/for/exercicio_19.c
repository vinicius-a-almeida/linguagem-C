#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, n, fat, c;
    float e=0;
    printf("digite o valor do fatorial: ");
    scanf("%d", &n);
    fat=n;
    for(c=1;c<=n;c++){
    for(i=1;i<=c;i++){
        fat = fat*i;
    }
        e = e + 1.0/fat;
    }
    printf("a formula E é: %.2f\n", e);
    system("pause");
    return 0;
}