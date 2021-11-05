#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, maio, meno, n;
    for(i=1;i<=10;i++){
        printf("digite o %dº número: ", i);
        scanf("%d", &n);
        if(i==1){
            maio = n;
            meno = n;
        }
        if(n>maio){
            maio = n;
        }else if(n<meno){
            meno = n;
        }
    }
    printf("o maior número digitado foi %d e o menor %d\n", maio, meno);
    system("pause");
    return 0;
}