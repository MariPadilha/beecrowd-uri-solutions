#include <stdio.h>
int main(){
    int b;
    double a;
    scanf("%lf%i", &a, &b);
    if(a == 1.0){
        a = 4.0;}
    else if(a == 2.0){
        a = 4.5;}
    else if(a == 3.0){
        a = 5.0;}
    else if(a == 4.0){
        a = 2.0;}
    else if(a == 5.0){
        a = 1.5;}
    printf("Total: R$ %.2lf\n", a*b);
}
