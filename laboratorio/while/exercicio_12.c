#include <stdio.h>
#include <stdlib.h>

int main (){
    int cep=0, idd=0, lop=0, clientes_caf=0, clientes_out=0, cont_30_mais=0, cont_30_menos=0;
    while(lop==0){
        printf("digite o cep: ");
        scanf("%d", &cep);
        if(cep==0){
            printf("\n%d clientes moram na mesma area da cafeteria\n", clientes_caf);
            printf("\n%d clientes moram em outras areas\n", clientes_out);
            printf("\nclientes com 30 anos ou mais compraram %d produtos\n", cont_30_mais);
            printf("\nclientes com menos de 30 anos compraram %d produtos\n", cont_30_menos);
            return 0;
        }else if(cep==59905000){
            clientes_caf++;
        }else
            clientes_out++;
        do{
        printf("digite a idade do cliente: ");
        scanf("%d", &idd);
        if(idd<10 || idd>110){
            printf("idade invalida, insira a idade mais uma vez!\n");
        }
        }while(idd<10 || idd>110);
        int itens=0;
        printf("quantidade de itens: ");
        scanf("%d", &itens);
        if(idd>=30){
            cont_30_mais = cont_30_mais + itens;
        }else
            cont_30_menos = cont_30_menos + itens;
        if(itens<1 || itens>12){
            printf("\7\a\n!!alerta!!\n\a\7");
        }
    }
}