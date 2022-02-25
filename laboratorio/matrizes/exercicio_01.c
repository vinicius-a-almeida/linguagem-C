#include <stdio.h>
#include <stdlib.h>

int main (){
    int mat[3][3], i, j, maio, l_maio=1, c_maio=1;
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("digite o %d %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    maio = mat[1][1];
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            if(mat[i][j]>maio){
                maio = mat[i][j];
                l_maio = i;
                c_maio = j;
            }
        }
    }
    printf("\no maior número digitado é %d na linha %d e coluna %d\n\n", maio, l_maio, c_maio);
    system("pause");
    return 0;
}