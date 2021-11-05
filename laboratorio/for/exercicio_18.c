#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, n, fat;
    printf("digite o fatorial: ");
    scanf("%d", &n);
    fat = n;
    printf("%d! = %dx", n, n);
    for(i=n-1;i>=1;i--){
        fat = i * fat;
        if(i==1){
            printf("%d", i);
            printf("=%d\n", fat);
            system("pause");
            return 0;
        }printf("%dx", i);
    }
}