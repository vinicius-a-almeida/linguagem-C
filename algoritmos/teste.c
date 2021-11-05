#include <stdio.h>
#include <stdlib.h>

int main (){
	int vet [10], i, soma=0;
	for(i=0;i<10;i++){
		printf("digite o %dº número: ", i+1);
		scanf("%d", &vet[i]);
		if(vet[i]%2!=0){
			soma = vet[i] + soma;
		}
	}
	printf("a soma dos números impares é: %d", soma);
	system("pause");
	return 0;
}