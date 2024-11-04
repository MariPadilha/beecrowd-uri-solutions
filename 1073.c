#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    scanf("%i", &numero);
    for(int i = 2; i <= numero; i+=2){
        printf("%i^2 = %i\n", i, i*i);
    }
}
