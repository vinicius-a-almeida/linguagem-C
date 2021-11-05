#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){
    setlocale (LC_ALL, "");
    float a=0,b=0,c=0, e=0;
    int esc=0;
    printf("digite 1 para média geométrica\n2 para média ponderada\n3 para média harmônica\ne 4 para média Aritmética: ");
    scanf("%d", &esc);
    if(esc==1){
        printf("o resultado da média geométrica é %f", pow(a,0.33)*pow(b,0.33)*pow(c,0.33));
    }else if(esc==2){
        printf("o resultado da média ponderada é %f", (1*a)+(2*b)+(3*c)/6);
    }else if(esc==3){
        printf("o resultado da média harmônica é %f", 3/(1/a)+(1/b)+(1/c));   
    }else if(esc==4){
        printf("o resultado da média aritmetica é %f", (a+b+c)/3);
    }else
        printf("error");
    system ("pause");
    return 0;
}