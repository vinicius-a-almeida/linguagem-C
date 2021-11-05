#include <stdio.h>

int main (){
    int v1, v2 = 0;
    printf("digite seu ano de nascimento e o ano atual\n");
    scanf("%d%d", &v1, &v2);
    printf("sua idade e %d", v2-v1);
    return 0;
}