#include <stdio.h>

int main(){
    float valor1, valor2 = 0;
	printf("digite dois valores\n");
    scanf("%f%f", &valor1, &valor2);
    printf("%.1f %.1f", valor2, valor1);
    return 0;
}