#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, n=1;
    float s=0;
    for(i=1;i<=55;i++){
        s += n/i;
        n+=2;
    }
    printf("o resultado é %.2f\n", s);
    system("pause");
    return 0;
}