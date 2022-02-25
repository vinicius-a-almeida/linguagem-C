#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char a[5], b[5], comp[5];
    int i, tam, j, k=-1;
    printf("digite a primeira palavra: ");
    scanf(" %s", a);
    printf("digite a segunda palavra: ");
    scanf(" %s", b);
    tam = strlen(b);
    for(i=4;i>=0;i--){
        j=0;
        for(j=k;j<=3;j++){
            comp[j] = b[i];
        }
        k++;
    }if(strcmp(comp, a)== 0){
        printf("é um anagrama");
    }else{
        printf("não é um anagrama");
    }
    system("pause");
    return 0;
}