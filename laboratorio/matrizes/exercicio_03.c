#include <stdio.h>
#include <stdlib.h>

int main (){
    int mat[5][5], i, j;
    for(i=0; i<=4; i++){
        for(j=0; j<=4; j++){
            mat[i][j]=0;
            if(i==j){
                mat[i][j]=1;
            }
        }
    }
    for(i=0; i<=4; i++){
        for(j=0; j<=4; j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}