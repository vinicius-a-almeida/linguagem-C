#include <stdio.h>
#include <stdlib.h>

int main (){
    int david=170,lav=166, i=0;
    while(david>=lav){
        david+=2;
        lav+=3;
        i++;
    }
    printf("\nforam necessarios %d anos para que lavinia seja maior que david\n", i);
    system("pause");
    return 0;
}