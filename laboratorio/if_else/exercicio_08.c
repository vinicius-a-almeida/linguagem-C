#include <stdio.h>
#include <stdlib.h>

int main (){
    float alt = 0;
    char sex; 
    printf("qual o seu sexo?\ndigite [h] para homem e [m] para mulher: ");
    scanf("%s", &sex);
    printf("digite sua altura: ");
    scanf("%f", &alt);
    if(sex=='h'){
        printf("\na seu peso ideal é Kg %.1f\n\n", 72.7*alt-58);
    }else if(sex=='m'){
        printf("\na sua peso ideal é KG %.1f\n\n", 62.1*alt-58);
    }else
        printf("\nerror\n\n");
    system ("pause");
    return 0;
}