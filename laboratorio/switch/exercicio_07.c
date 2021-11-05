#include <stdio.h>
#include <stdlib.h>

int main (){
    char sex;
    printf("digite seu sexo [f] ou [m]: ");
    scanf("%c", &sex);
    switch (sex){
    case('f'):
    case('F'):
        printf("\nseu sexo é feminino\n\n");
    break;
    case('m'):
    case('M'):
        printf("\nseu sexo é masculino\n\n");
    break;
    default:
        printf("\nerror\n\n");
    }
}