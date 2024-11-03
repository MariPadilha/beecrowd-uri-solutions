#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero;
    scanf("%i", &numero);
    for(int i = 1; i <= numero; i+=2){
        printf("%i\n", i);
    }
}
