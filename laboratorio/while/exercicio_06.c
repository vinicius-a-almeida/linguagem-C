#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(NULL));
    int num=0, i=0,num1=0;
    num = rand()%100;
    printf("tente adivinhar o número da sorte!!!");
    printf("\ndigite um número: ");
    i++;
    do{
    scanf("%d", &num1);
    if(num1<num){
            printf("\no número da sorte é maior\n");
            i++;
        }else if (num1>num){
            printf("\no número da sorte é menor\n");
            i++;
            }
    }while(num!=num1);
        printf("\nvocê acertou!!!\n");
        printf("\nnúmero de tentativas: %d\n", i);
        system("pause");
        return 0;
}