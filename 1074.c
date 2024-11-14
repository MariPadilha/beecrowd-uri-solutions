#include<stdio.h>
int main(){
    int numero_casos, numero;
    scanf("%i", &numero_casos);
    for(int i = 0; i < numero_casos; i++){
        scanf("%i", &numero);
        if(numero < 0){
            if(numero % 2 != 0)
                printf("ODD NEGATIVE\n");
            else
                printf("EVEN NEGATIVE\n");
        }else if(numero > 0){
            if(numero % 2 != 0)
                printf("ODD POSITIVE\n");
            else
                printf("EVEN POSITIVE\n");
        }else
            printf("NULL\n");
    }
    return 0;
}
