#include <stdio.h>
int main(){
    int qtde1, qtde2, cod1, cod2;
    double valor1, valor2, total;
    scanf("%i%i%lf", &cod1, &qtde1, &valor1);
    scanf("%i%i%lf", &cod2, &qtde2, &valor2);
    total = (qtde1 * valor1) + (qtde2 * valor2);
    printf("VALOR A PAGAR: R$ %.2lf\n",total);
    printf("");
}
