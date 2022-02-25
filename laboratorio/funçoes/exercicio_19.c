#include <stdio.h>
#include <stdlib.h>

int aritmetica(int n, int *notas);
int ponderada(int n, int *notas);
int main (){
    int notas[3], i, n, op, res;
    char nome[20], curso[20];
    for(i=0;i<5;i++){
        printf("digite seu nome: ");
        scanf(" %[^\n]s", nome);
        printf("digite seu curso: ");
        scanf(" %[^\n]s", curso);
        for(n=0;n<3;n++){
            printf("digite a %d nota: ",n+1);
            scanf("%d", &notas[n]);
        }
        printf("digite 1 para média aritmetica e 2 para média ponderada: ");
        scanf("%d", &op);
        if(op==1){
            res =aritmetica(3,notas);
            printf("o aluno: %s\n", nome);
            printf("do curso: %s\n", curso);
            printf("a média aritmetica é: %d\n\n",res);
        }if(op==2){
            res = ponderada(3,notas);
            printf("o aluno: %s\n", nome);
            printf("do curso: %s\n", curso);
            printf("a média ponderada é: %d\n\n", res);
        }
    }
    system ("pause");
    return 0;

}
int aritmetica(int n, int *notas){
    int res, i;
    for(i=0;i<n;i++){
        res = notas[i];
    }
    res/3;
    return (res);
}
int ponderada(int n, int *notas){
    int res, i;
    for(i=0;i<n;i++){
        res = notas[i];
    }
    res/3;
    return (res);
}