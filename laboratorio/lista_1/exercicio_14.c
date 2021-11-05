#include <stdio.h>

int main (){
    char nome[100], end[150], cep[20], tel[20];
    printf("digite seu nome completo e endereco\n");
    scanf("%s%s", &nome, &end);
    printf("digite seu cep e telefone\n");
    scanf("%s%s", &cep, &tel);
    printf("seu nome: %s\n", nome);
    printf("seu endereco e %s\n", end);
    printf("seu cep e %s e seu telefone %s", cep, tel);
    return 0;
}