#include <stdio.h>
int main(){
    float n1, n2;
    scanf("%f%f", &n1, &n2);
    if(n1 > 0 && n2 > 0)
        printf("Q1\n");
    if(n1 < 0 && n2 > 0)
        printf("Q2\n");
    if(n1 < 0 && n2 < 0)
        printf("Q3\n");
    if(n1 > 0 && n2 < 0)
        printf("Q4\n");
    if(n1 == 0 && n2 != 0)
        printf("Eixo Y\n");
    if(n1 != 0 && n2 == 0)
        printf("Eixo X\n");
    if(n1 == 0 && n2 == 0)
        printf("Origem\n");
}
