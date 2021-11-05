#include <stdio.h>
#include <stdlib.h>

int main (){
    int i;
    float n, hn=0;
    printf("digite quantos termos da serie harmonica quer ver: ");
    scanf("%f", &n);
    for(i=1;i<=n;i++){
        hn = hn + 1/i;
    }
    printf("o resultado da serie harmonica é %.2f\n", hn);
    system("pause");
    return 0;
}