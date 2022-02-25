#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, vet_a[10], vet_b[10];
    for(i=0;i<=9;i++){
        printf("digite o %d valor: ", i+1);
        scanf("%d", &vet_a[i]);
        if(vet_a[i]%2==0){
            vet_b[i]=1; 
        }else{
            vet_b[i]=0;
        }
    }
    printf("vetor B:\n");
    for(i=0;i<=9;i++){
        printf("%d\n", vet_b[i]);
    }
    system("pause");
    return 0;
}