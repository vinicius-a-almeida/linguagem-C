#include <stdio.h>
#include <stdlib.h>

int main (){
    int cod=0;
    printf("digite o código do produto: ");
    scanf("%d", &cod);
    switch(cod){
        case(1):
            printf("\nseu produto veio da região sul\n\n");
        break;
        case(2):
            printf("\nseu produto veio da região norte\n\n");
        break;
        case(3):
            printf("\nseu produto veio da região leste\n\n");
        break;
        case(4):
            printf("\nseu produto veio da região oeste\n\n");
        break;
        case(5):
        case(6):
            printf("\nseu produto veio da região nordeste\n\n");
        break;
        case(7):
        case(8):
        case(9):
            printf("\nseu produto veio da região sudeste\n\n");
        break;
        case(10):
            printf("\nseu produto veio da região centro-oeste\n\n");
        break;
        default:
            printf("\nerror\n\n");
        system("pause");
        return 0;
    }
}