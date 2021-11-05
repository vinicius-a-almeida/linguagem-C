#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, c, nota, filme[4], maio, meno;
    for(c=1;c<=5;c++){
        system("clear || cls");
        printf("expectador %d\n\n",c);
        for(i=1;i<=4;i++){
            printf("digite a nota do %d filme: ", i);
            scanf("%d", &filme[i]);
            if(i==1){
                maio = filme[i];
                meno = filme[i];
            }
            if(filme[i]>maio){
                maio = filme[i];
            }else if(filme[i]<meno){
                meno = filme[i];
            }
        }
        
    }for(i=1;i<=4;i++){
            if(filme[i]==maio){
                printf("o filme %d é o filme mais votado\n", i);
            }else if(filme[i]==meno){
                printf("o filme %d é o filme menos votado\n", i);
            }
        }
    system ("pause");
    return 0;
}