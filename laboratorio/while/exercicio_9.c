#include <stdio.h>
#include <stdlib.h>

int main (){
    int a=16000,b=25000,i=0;
    while(a<=b){
        a=(a+(a*0.03));
        b=(b+(b*0.025));
        i++;
    }
    printf("\nforam necessarios %d anos para que a cidade A ultrapassase a população da cidade B\n", i);
    system("pause");
    return 0;
}