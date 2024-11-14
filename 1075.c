#include<stdio.h>
int main(){
    int numero;
    scanf("%i", &numero);
    for(int i = 1; i <= 10000; i++){
        if(i % numero == 2){
            printf("%i\n", i);
        }
    }
    return 0;
}
