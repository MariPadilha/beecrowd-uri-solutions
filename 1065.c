#include <stdio.h>
#include <stdlib.h>
int main(){
    int contador = 0, numero;
    for(int i = 0; i < 5; i++){
        scanf("%i", &numero);
        if(numero%2==0){
            contador++;
        }
    }
    printf("%i valores pares\n", contador);
}
