#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "");
    float alt = 0, peso =0;
    printf("digite sua altura, com virgula: ");
    scanf("%f", &alt);
    printf("digite seu peso: ");
    scanf("%f", &peso);
    if(alt<=1.2 && peso <=60){
        printf("\nvocê foi classificado como tipo A\n\n");
    }else if(alt>=1.21 && alt <=1.70 && peso <= 60){
        printf("\nvocê foi classificado como tipo B\n\n");
    }else if(alt>=1.70 && peso <= 60){
        printf("\nvocê foi classificado como tipo C\n\n");
    }else if(alt<=1.20 && peso>=60 && peso <=90){
        printf("\nvocê foi classificado como tipo D\n\n");
    }else if(alt>=1.20 && alt <=1.70 && peso>=60 && peso <=90){
        printf("\nvocê foi classificado como tipo E\n\n"); 
    }else if(alt>=1.70 && peso>=60 && peso <=90){
        printf("\nvocê foi classificado como tipo F\n\n");
    }else if(alt<=1.20 && peso >=90){
        printf("\nvocê foi classificado como tipo G\n\n"); 
    }else if(alt<=1.21 && alt >=1.70 && peso >= 90){
        printf("\nvocê foi classificado como tipo H\n\n"); 
    }else if(alt>=1.70 && peso <=90){
        printf("\nvocê foi classificado como tipo H\n\n");
    }else
        printf ("\nerror\n\n");
    system ("pause");
    return 0;
}