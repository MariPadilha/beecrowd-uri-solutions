#include <stdio.h>
#include <stdlib.h>
int max(int a, int b){
    if(a>b)
        return a;
    return b;
}
int min(int a, int b){
    if(a<b)
        return a;
    return b;
}
int main(){
    int numero1, numero2, acumulador=0;
    scanf("%i", &numero1);
    scanf("%i", &numero2);
    for(int i = min(numero1, numero2)+1; i < max(numero1, numero2); i++){
        if(i % 2 !=0){
            acumulador+=i;
        }
    }
    printf("%i\n", acumulador);
}
