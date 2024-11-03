#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero;
    scanf("%i", &numero);
    for(int i = numero; i <= numero+11; i++){
        if(i % 2 !=0){
            printf("%i\n", i);
        }
    }
}
