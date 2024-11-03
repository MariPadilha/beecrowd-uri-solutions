#include <stdio.h>
#include <stdlib.h>
int main(){
    int contador = 0;
    float media = 0, numero;
    for(int i = 0; i < 6; i++){
        scanf("%f", &numero);
        if(numero >= 0){
            media+=numero;
            contador++;
        }
    }
    printf("%i valores positivos\n%.1f\n", contador, media/contador);
}
