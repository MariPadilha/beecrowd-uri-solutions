#include <stdio.h>
int main(void) {
    float salario, percent, reajuste;
    scanf("%f", &salario);
    if(salario < 400.01){
        percent = salario * 0.15;
        reajuste = salario + (percent);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", reajuste, percent);
    }
    else if(salario < 800.01){
        percent = salario * 0.12;
        reajuste = salario + (percent);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", reajuste, percent);
    }
    else if(salario < 1200.01) {
        percent = salario * 0.10;
        reajuste = salario + (percent);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", reajuste, percent);
    }
    else if(salario <= 2000) {
        percent = salario * 0.07;
        reajuste = salario + (percent);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", reajuste, percent);
    }
    else {
        percent = salario * 0.04;
        reajuste = salario + (percent);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", reajuste, percent);
    }
}
