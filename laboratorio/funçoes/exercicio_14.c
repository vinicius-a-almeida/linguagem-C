#include<stdio.h>
void organizar(int *numeros, int tamanho){
  int cont1, cont2, aux;
  for(cont1=0;cont1<tamanho;cont1++){
    for(cont2=0;cont2<tamanho;cont2++){

      if(numeros[cont1]<numeros[cont2]){

        aux = numeros[cont1];
        numeros[cont1] = numeros[cont2];
        numeros[cont2] = aux;

      }

    }
  }
}

void mostrar(int *numeros, int tamanho){
  int cont;
  printf("Ordem Crescente\n");
  for(cont=0;cont<tamanho;cont++){
    printf("numeros[%d] = %d\n",cont,numeros[cont]);
  }
}

void lerVetor(int *numeros, int tamanho){
  int cont;
  for(cont=0;cont<tamanho;cont++){
    printf("Informe o valor do %d numero: ",cont+1);
    scanf("%d",&numeros[cont]);
  }
}

int main(){
  int tamanho;
  printf("Informe a quantidade de numeros: ");
  scanf("%d",&tamanho);

  int n[tamanho];
  lerVetor(n,tamanho);

  organizar(n,tamanho);
  mostrar(n,tamanho);
}