#include<stdio.h>
int main(){
    int numero_casos, numero_cobaias = 0;
    scanf("%i", &numero_casos);
    int numero;
    char codigo;
    int ratos = 0, coelho = 0, sapo = 0;
    for(int i = 0; i < numero_casos; i++){
        scanf("%i %c", &numero, &codigo);
        numero_cobaias += numero;
        if(codigo == 'R')
            ratos += numero;
        else if(codigo == 'C')
            coelho += numero;
        else
            sapo += numero;
    }
    double porcentR = ratos * 100.0;
    porcentR = porcentR / (double)numero_cobaias;
    double porcentC = coelho * 100.0;
    porcentC = porcentC / (double)numero_cobaias;
    double porcentS = sapo * 100.0;
    porcentS = porcentS / (double)numero_cobaias;
    printf("Total: %i cobaias\n", numero_cobaias);
    printf("Total de coelhos: %i\n", coelho);
    printf("Total de ratos: %i\n", ratos);
    printf("Total de sapos: %i\n", sapo);
    printf("Percentual de coelhos: %.2lf %%\n", porcentC);
    printf("Percentual de ratos: %.2lf %%\n", porcentR);
    printf("Percentual de sapos: %.2lf %%\n", porcentS);
    return 0;
}
