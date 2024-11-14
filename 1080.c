#include<stdio.h>
int main(){
    int maior = 0, numero, posicao;
    for(int i = 0; i<100; i++){
        scanf("%i", &numero);
        if(numero > maior){
            maior = numero;
            posicao = i;
        }
    }
    printf("%i\n%i\n", maior, posicao+1);
    return 0;
}
