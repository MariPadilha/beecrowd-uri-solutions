#include<stdio.h>
int main(){
    int numero_casos;
    double a, b, c, media;
    scanf("%i", &numero_casos);
    for(int i = 0; i<numero_casos; i++){
        scanf("%lf %lf %lf", &a, &b, &c);
        media = (2.0 * a) + (3.0 * b) + (5.0 * c);
        printf("%.1lf\n", media/10.0);
    }
    return 0;
}
