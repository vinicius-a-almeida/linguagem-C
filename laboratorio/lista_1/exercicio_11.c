#include <stdio.h>

int main (){
    float v1, v2, v3, v4 = 0;
    printf("digite 4 valores:\n");
    scanf("%f%f%f%f", &v1, &v2, &v3, &v4);
    printf("a media desses valores %.1f", (v1+v2+v3+v4)/4);
    return 0;
}