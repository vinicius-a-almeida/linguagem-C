#include <stdio.h>
#include <stdlib.h>

int main (){
    int num = 0;
    printf("digite o código do produto: ");
    scanf("%d", &num);
    if(num==1){
        printf("\nalimento não-perecivel\n\n");
    }else if(num>=2 && num<=4){
        printf("\nalimento perecivel\n\n");
    }else if(num>=5 && num<=6){
        printf("\nvesturário\n\n");
    }else if(num==7){
        printf("\nhigiene pessoal\n\n");
    }else if(num>=8 && num<=10){
        printf("\nutensilios domesticos\n\n");
    }else
        printf("\nerror\n\n");
    system ("pause");
    return 0;
}