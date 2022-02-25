#include <stdio.h>
#include <stdlib.h>

int main (){
    int mat[3][3], i, j, meno, l_meno=0, c_meno=0;
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("digite o %d %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");
    meno = mat[0][0];
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            if(meno>mat[i][j]){
                meno = mat[i][j];
                l_meno = i;
                c_meno = j;
            }
        }
    }
    printf("o menor valor é %d na linha %d e na coluna %d", meno, l_meno, c_meno);
    system("pause");
    return 0;
}