#include <stdio.h>
#include <stdlib.h>

int main (){
    int r[5], s[10], x[5], i;
    for(i=0;i<10;i++){
        printf("digite o %d número do vetor s: ", i+1);
        scanf("%d", &s[i]);
    }
    printf("\n");
    for(i=0;i<5;i++){
        printf("digite o %d número do vetor r: ", i+1);
        scanf("%d", &r[i]);
    }
    int j;
    for(i=0;i<10;i++){
        for(j=0;j<5;j++){
            if(s[i]==r[j]){
                x[j]=r[j];
            }
        }
    }
    printf("\nos números comuns aos vetores R e S é\n");
    for(i=0;i<5;i++){
        printf("%d\n", x[i]);
    }
    system("pause");
    return 0;
}