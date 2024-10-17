#include <stdio.h>
#include <stdlib.h>
int main(){
    int contador = 0;
    float numero;
    for(int i = 0; i < 6; i++){
        scanf("%f", &numero);
        if(numero > 0)
            contador++;
    }
    printf("%i valores positivos\n", contador);
    return 0;
}
