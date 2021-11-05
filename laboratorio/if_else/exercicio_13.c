#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "");
    int func = 0;
    printf("digite o número do funcionario: ");
    scanf("%d", &func);
    float sal =0;
    printf("digite o salario atual do funcionario %d: ", func);
    scanf("%f", &sal);
    if(sal >=0 && sal <= 400){
        printf("\nseu novo salario é de R$ %.2f\n\n", sal+(sal*0.16));
    }else if(sal>=400.01 && sal <=700){
        printf("\nseu novo salario é de R$ %.2f\n\n", sal+(sal*0.12));
    }else if(sal >=700.01 && sal <=1000){
        printf("\nseu novo salario é de R$ %.2f\n\n", sal+(sal*0.10));
    }else if(sal>=1000.01 && sal <=1800){
        printf("\nseu novo salario é de R$ %.2f\n\n", sal+(sal*0.08));
    }else if(sal>=1800.01 && sal <=2500){
        printf("\nseu novo salario é de R$ %.2f\n\n", sal+(sal*0.04));
    }else if(sal>2500){
        printf("\nvocê não teve aumento caba safado\n\n");
    }else
        printf("\nta devedor garotinho?\n\n");
    system ("pause");
    return 0;
}