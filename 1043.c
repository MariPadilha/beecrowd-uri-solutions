#include <stdio.h>
int main(){
    float n1, n2, n3, perimetro, area;
    scanf("%f%f%f", &n1, &n2, &n3);
    if(n1 < n2 + n3 && n2 < n1 + n3 && n3 < n1 + n2){
        perimetro = n1 + n2 + n3;
        printf("Perimetro = %.1f\n", perimetro);}
    else{
        area = (n1 + n2) * n3 / 2.0;
        printf("Area = %.1f\n", area);}
}
