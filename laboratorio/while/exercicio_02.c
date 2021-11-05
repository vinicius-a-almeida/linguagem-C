#include <stdio.h>
#include <stdlib.h>

int main (){
    char carac;
    while (carac!='x'){
        printf("digite uma tecla: ");
        scanf(" %c", &carac);
    }
    printf("\nfim\n\n");
    system ("pause");
    return 0;
}