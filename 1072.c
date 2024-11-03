#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, dentro=0, fora=0, n;
    scanf("%i", &numero);
    for(int i = 0; i < numero; i++){
        scanf("%i", &n);
        if(n < 10 || n > 20){
            fora++;
        }else
            dentro++;
    }
    printf("%i in\n%i out\n", dentro, fora);
}
