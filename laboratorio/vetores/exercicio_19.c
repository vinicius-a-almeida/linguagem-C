#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10], i, j,k=0, l=10;
    for(i=0;i<=9;i++){
    printf("digite o %d número: ", i+1);
    scanf("%d", &a[i]);
    }
    for(i=0;i<=9;i++){
        l--;
        for(j=l;j>=l;j--){
            if(a[i]==a[j]){
                k++;
            }
        }
    }
    if(k==10){
        printf("é palindromo");
    }else{
        printf("não é palindromo");
    }
    system("pause");
    return 0;

}