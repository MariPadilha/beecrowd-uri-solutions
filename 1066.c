#include <stdio.h>
#include <stdlib.h>
int main(){
    int par = 0, impar = 0, positivo = 0, negativo = 0, numero;
    for(int i = 0; i < 5; i++){
        scanf("%i", &numero);
        if(numero%2==0){
            par++;
        }else{
            impar++;
        }
        if(numero<0){
            negativo++;
        }
        if(numero>0){
            positivo++;
        }
    }
    printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n", par, impar);
    printf("%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n", positivo, negativo);
}
