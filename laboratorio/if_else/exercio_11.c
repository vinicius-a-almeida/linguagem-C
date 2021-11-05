#include <stdio.h>
#include <stdlib.h>

int main (){
    float sal = 0;
    int anos = 0;
    printf("digite seu salario: ");
    scanf("%f", &sal);
    printf("digite a quantos anos você está na wold systems: ");
    scanf("%d", &anos);
    if(anos>=5){
        printf("\nvocê recebeu um aumento de 16%%, seu novo salario e de R$ %.2f\n\n", sal+(sal*0.16));
    }else
        printf("\nvocê recebeu um aumento de 10%%, seu novo salario é de R$ %.2f\n\n", sal+(sal*0.10));
    system ("pause");
    return 0;
}