#include <stdio.h>
int main(){
    int numfunc;
    double valorhr, salario, hrtrab;
    scanf("%d%lf%lf", &numfunc, &hrtrab, &valorhr);
    salario = (hrtrab * valorhr);
    printf("NUMBER = %i\n",numfunc);
    printf("SALARY = U$ %.2lf\n",salario);
    printf("");
}
