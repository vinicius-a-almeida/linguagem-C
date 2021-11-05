#include <stdio.h>
#include <stdlib.h>

int main (){
    int num =0;
    printf("digite um número que represente um mês: ");
    scanf("%d", &num);
    switch(num){
    case(1):
        printf("\njaneiro\n\n");
    break;
    case(2):
        printf("\nfevereiro\n\n");
    break;
    case(3):
        printf("\nmarço\n\n");
    break;
    case(4):
        printf("\nabril\n\n");
    break;
    case(5):
        printf("\nmaio\n\n");
    break;
    case(6):
        printf("\njunho\n\n");
    break;
    case(7):
        printf("\njulho\n\n");
    break;
    case(8):
        printf("\nagosto\n\n");
    break;
    case(9):
        printf("\nsetembro\n\n");
    break;
    case(10):
        printf("\noutubro\n\n");
    break;
    case(11):
        printf("\nnovembro\n\n");
    break;
    case(12):
        printf("\ndezembro\n\n");
    break;
    default:
        printf("\nerror\n\n");
    }
    system("pause");
    return 0;
}