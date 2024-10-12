#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    float imposto, salario;
    scanf("%f", &salario);

    if(salario < 2000.01){
        printf("Isento\n");
    }else if(salario < 3000.01){
        imposto = ((salario - 2000.0) * 0.08);
        printf("R$ %.2f\n", imposto);
    }else if(salario <= 4500){
        imposto = (1000.0 * 0.08 + (salario - 3000.0) * 0.18);
        printf("R$ %.2f\n", imposto);
    }else{
        imposto = (1000.0 * 0.08 + 1500.0 * 0.18 + (salario - 4500.0) * 0.28);
        printf("R$ %.2f\n", imposto);
    }
    return 0;
}
