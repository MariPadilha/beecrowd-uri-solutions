#include <stdio.h>
 
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
int main() {
    int a, b, contador, numero_casos, i, j;
    scanf("%i", &numero_casos);
    for(i = 0; i < numero_casos; i++){
        scanf("%i %i", &a, &b);
        contador = 0;
        for(j = min(a, b)+1; j < max(a, b); j++){
            if(j % 2 != 0){
                contador+=j;
            }
        }
        printf("%i\n", contador);
    }
    return 0;
}
