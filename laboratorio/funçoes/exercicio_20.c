#include <stdio.h>
#include <stdlib.h>

int main (){
    float valor;
    int op;
    printf("digite o total gasto pelo cliente: ");
    scanf("%d", &valor);
    printf("digite 1 para pagamento a vista com 10%% de desconto\n");
    printf("digite 2 para parcelamento em 2x (preço de etiqueta\n");
    printf("digite 3 para parcelamento de 3x a 10x, com 3%% de juros ao mês\n");
    printf("(somente para compras acima de R$ 100,00)");
    scanf("%d", &op);
    func1(valor);
    func2(valor);
    func3(valor);
    system ("pause");
    return 0;
}
void func1(int valor){
    printf("valor final: R$ %.2f", valor-(valor*0.10));
}
void func2(int valor){
    printf("final R$ %.2f", valor);
}
void func3(int valor){
    int par;
    printf("digite a quantidade de parcelas: ");
    scanf("%d", &par);
    par*3;
    printf("valor final: R$ %,2f", valor+(valor*par/100));
}