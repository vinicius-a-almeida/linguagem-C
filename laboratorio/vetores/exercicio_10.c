#include <stdlib.h>
#include <stdio.h>

int main (){
        float vet[10], x, vet2[10];
        int i;
        for(i=0;i<=9;i++){
            printf("digite o %d número: ", i+1);
            scanf("%f", &vet[i]);
        }
        printf("digite o número ");
        scanf("%f", &x);
        for(i=0;i<=9;i++){
            vet2[i]=vet[i]*x;
            printf("%.2f\n", vet2[i]);
        }       
        system ("pause");
        return 0;
}