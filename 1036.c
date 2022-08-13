#include <stdio.h>
#include <math.h>
int main(){
    double A, B, C, delta, quadra, x1, x2;
    scanf("%lf%lf%lf", &A, &B, &C);
    if(A == 0){
        printf("Impossivel calcular\n");}
    if(A > 0){
        delta = pow(B,2)-4*A*C;
        if(delta < 0){
            printf("Impossivel calcular\n");}
        else if(delta > 0) {
            quadra = pow(delta, 0.5);
            x1 = (-B + quadra) / (2 * A);
            if(x1 == 0){
                printf("Impossivel calcular\n");}
            else{
                printf("R1 = %.5lf\n", x1);}
            x2 = (-B - quadra) / (2 * A);
            if(x2 == 0){
            printf("Impossivel calcular\n");}
            else{
                printf("R2 = %.5lf\n", x2);}
        }
        }
}
