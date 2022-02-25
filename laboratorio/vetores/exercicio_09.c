#include <stdio.h>
#include <stdlib.h>

int main (){
  int vet [5], vet2 [8], i;
  printf("primeiro vetor\n\n");
  for(i=0;i<=4;i++){
      printf("digite o %d número: ", i+1);
      scanf("%d", &vet[i]);
  }
  printf("segundo vetor\n\n");
  for(i=0;i<=7;i++){
      printf("digite o %i número: ", i+1);
      scanf("%d", &vet2[i]);
  }
  for(i=0;i<=8;i++){
      if(vet[i]== vet2[i]){
          printf("%d\n", vet2[i]);
      }
  }
  system ("pause");
  return 0;
}