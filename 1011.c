#include <stdio.h>
int main(){
    double volume, raio;
    scanf("%lf", &raio);
    volume = 4.0 * 3.14159 * (raio * raio * raio) / 3.0;
    printf("VOLUME = %.3lf\n",volume);
}
