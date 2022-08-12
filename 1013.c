#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, b, c, maior, resultado;
    scanf("%i%i%i", &a, &b, &c);
    maior = (a + b + abs(a - b)) / 2;
    resultado = (maior + c + abs(maior - c)) / 2;
    printf("%i eh o maior\n",resultado);
}
