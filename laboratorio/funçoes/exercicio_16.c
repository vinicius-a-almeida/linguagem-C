#include <stdio.h>
#include <stdlib.h>

int fat (int n);
int main (){
    int n;
    printf("digite um número para saber seu fatorial: ");
    scanf("%d", &n);
    fat(n);
    printf("o fatorial de %d é %d\n", n, fat(n));
    system ("pause");
    return 0;
}
int fat(int n){
    int fat=1, i;
    for(i=1;i<=n;i++){
        fat=fat*i;
    }
    return(fat);
}