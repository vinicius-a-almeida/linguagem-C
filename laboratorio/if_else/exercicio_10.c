#include <stdio.h>
#include <stdlib.h>

int main (){
    float sal = 0, emp = 0;
    printf("digite seu salario: ");
    scanf("%f", &sal);
    printf("digite quanto vc quer pegar de emprestimo: ");
    scanf("%f", &emp);
    if(sal*0.20<emp){
        printf("\nemprestimo não conscedido\n\n");
    }else
        printf("\nempréstimo concedido\n\n");
    system ("pause");
    return 0;
}