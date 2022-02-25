#include <stdio.h>
#include <stdlib.h>

int main(){
    int gab[10], i, alunos[10][10], j, aluno[10], notas_aluno[10];
    printf("digite o gabarito da prova\n\n");
    for(i=0;i<=9;i++){
        printf("digite a %d questão do gabarito: ", i+1);
        scanf("%d", &gab[i]);//gabarito
    }
    printf("\n");
    for(i=0;i<=9;i++){
        for(j=0;j<=9;j++){
            printf("digite a %d questão do %d aluno: ", i+1, j+1);
            scanf("%d", &alunos[i][j]);//digitar as questões do aluno
        }
        printf("\n");
    }
    for(i=0;i<=9;i++){//comparação entre o valor do gabarito e o digitado
        aluno[i]=0;
        for(j=0;j<=9;j++){
            if(alunos[i][j]==gab[j]){
                aluno[i]++;
            }    
        }
        notas_aluno[i] = aluno[i];
    }
    for(i=0;i<=9;i++){
        printf("a nota do %d aluno foi %d\n", i+1, notas_aluno[i]);
    }
    int q_alun=0;
    for(i=0;i<=9;i++){
        if(notas_aluno[i]>=7){
            q_alun++;//descobrir quantos alunos passaram por média
        }
    }
    printf("foram aprovados %d\n", q_alun);
    system("pause");
    return 0;
}