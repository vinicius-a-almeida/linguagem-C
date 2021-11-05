#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
   setlocale(LC_ALL, "");
   int fatorial = 1, i, n;

   printf("informe um valor: ");
   scanf("%i", &n);


   for(i = n; i >= 1; i--){
   fatorial = i * fatorial;
   if(i==1){
      printf("%d=", i);
   }else{
      printf("%dx", i);
   }
   }
   printf("%d", fatorial);
   
return 0;

}