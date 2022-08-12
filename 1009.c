#include <stdio.h>
int main(){
    char nome;
    double salfixo, qtdevendas, total;
    scanf("%s%", &nome);
    scanf("%lf", &salfixo);
    scanf("%lf", &qtdevendas);
    total = salfixo + (qtdevendas * (15.0/100.0));
    printf("TOTAL = R$ %.2lf\n", total);
    printf("");
}
