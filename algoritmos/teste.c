#include <stdio.h>
int main(){
    int a, b, c, d;
    double n1,n2, res;
    scanf("%d%d%lf", &a, &b, &n1);
    scanf("%d%d%lf", &c,&d,&n2);
    res = (b*n1)+(d*n2);
    printf("VALOR A PAGAR: R$ %.2lf\n", res);
    return(0);
}