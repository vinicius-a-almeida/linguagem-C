#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, idd, maio, cont=0;
    char sex, olhos, cabelo;
    for(i=1;i<=2;i++){
        printf("digite [M] para masculino e [F] para feminino: ");
        scanf(" %c", &sex);
        printf("digite a cor dos olhos");
        printf("\n[A] azul\n[V] verde\n[C] castanho: ");
        scanf(" %c", &olhos);
        printf("digite sua idade: ");
        scanf("%d", &idd);
        printf("digite cor dos cabelos");
        printf("\n[L] louros\n[C] castanhos\n[P] pretos: ");
        scanf(" %c", &cabelo);
        if(i==1){
            maio = idd;
        }
        if((sex=='F' || sex=='f') && idd>=18 && idd<=35 && (olhos=='V' || olhos=='v') && (cabelo=='L' || cabelo=='l')){
            cont++;
        }
        if(idd>maio){
            maio = idd;
        }
    }
    printf("a maior idade do grupo é %d\n", maio);
    printf("A quantidade de indivíduos do sexo feminino, cuja idade está entre 18 e 35\n");
    printf("anos e que tenham olhos verdes e cabelos louros é %d\n", cont);  
    system("pause");
    return 0;
}