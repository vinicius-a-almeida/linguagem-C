#include <stdio.h>
#include <stdlib.h>

int main (){
    int op=0, hab=0,nasc=0,obt=0;
    printf("digite [1] para observar a natalidade\ndigite [2] para observar a taxa de mortalidade: ");
    scanf("%d", &op);
    printf("digite a quantidade de habitantes: ");
    scanf("%d", &hab);
    system("clear");
    switch(op){
        case(1):
            printf("digite quantas crianças nasceram: ");
            scanf("%d", &nasc);
            printf("\na taxa de natalidade é %d\n\n", nasc*1000/hab);
        break;
        case(2):
            printf("digite o número de obitos: ");
            scanf("%d", &obt);
            printf("\na taxa de mortalidade é %d\n\n", obt*1000/hab);
        break;
        default:
            printf("\nerror\n\n");
    }
    system("pause");
    return 0;
}