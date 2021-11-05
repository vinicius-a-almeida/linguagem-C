#include <stdio.h>
#include <stdlib.h>

int main (){
    int idd = 0;
    printf("digite a idade: ");
    scanf("%d", &idd);
    if(idd<=10 && idd>=0){
        printf("\nvalor R$ 30,00\n\n");
    }else if(idd>=10 && idd<=29){
        printf("\nvalor R$ 60,00\n\n");
    }else if(idd>=29 && idd<=45){
        printf("\nvalor R$ 120,00\n\n");
    }else if(idd>=45 && idd<=59){
        printf("\nvalor R$ 150,00\n\n");
    }else if(idd>59){
        printf("\nvalor R$ 300,00\n\n");
    }else
        printf("\nerro\n\n");
    system ("pause");
    return 0;
}