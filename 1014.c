#include <stdio.h>
int main(){
    int distancia;
    double combustivel, consumo;
    scanf("%i%lf", &distancia, &combustivel);
    consumo = distancia / combustivel;
    printf("%.3lf km/l\n", consumo);
}
