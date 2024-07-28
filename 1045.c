#include <stdio.h>
double a, b, c;
void ordene(double arr[3]) {
    if (arr[0] > arr[1] && arr[0] > arr[2]) {
        a = arr[0];
        if(arr[1]>arr[2]){
            b = arr[1];
            c = arr[2];
        }else{
            b = arr[2];
            c = arr[1];
        }
    } else if (arr[1] > arr[2] && arr[1] > arr[0]) {
        a = arr[1];
        if(arr[0]>arr[2]){
            b = arr[0];
            c = arr[2];
        }else{
            b = arr[2];
            c = arr[0];
        }
    }else{
        a = arr[2];
        if(arr[0]>arr[1]){
            b = arr[0];
            c = arr[1];
        }else{
            b = arr[1];
            c = arr[0];
        }
    }
}
int main(void) {
    double lista[3];
    scanf("%lf%lf%lf", &lista[0], &lista[1], &lista[2]);
    ordene(lista);
    if(a >= b+c)
        printf("NAO FORMA TRIANGULO\n");
    else{
        if(a*a == (b*b + c*c))
            printf("TRIANGULO RETANGULO\n");
        if(a*a > (b*b + c*c))
            printf("TRIANGULO OBTUSANGULO\n");
        if(a*a < (b*b + c*c))
            printf("TRIANGULO ACUTANGULO\n");
        if(a == b && b == c)
            printf("TRIANGULO EQUILATERO\n");
        if(a == b && b != c || a == c && c != b || b == c && c != a)
            printf("TRIANGULO ISOSCELES\n");
    }
}
