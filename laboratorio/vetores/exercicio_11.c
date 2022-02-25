#include <stdio.h>
#include <stdlib.h>

int main (){
    int x[10], y[10], i, c, j=10;
    for(i=0;i<=9;i++){
        printf("digite o %d número: ",  i+1);
        scanf("%d", &x[i]);
    }
    for(i=0;i<=9;i++){
        j--;
            for(c=j;c>=j;c--){
                y[c]=x[i];
            }
    }
    for(i=0;i<=9;i++){
        printf("vetor x= %d vetor y= %d\n", x[i], y[i]);
    }
    system ("pause");
    return 0;
}