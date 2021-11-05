#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
    char alf;
    printf("digite um caractere: ");
    scanf("%c", &alf);
    isalnum(alf) ? printf("\nseu caractere é alfanúmerico\n\n") : printf("\nseu caractere não é alfanúmerico\n\n");
    system ("pause");
    return 0;
}