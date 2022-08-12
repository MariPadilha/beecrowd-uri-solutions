#include <stdio.h>
#include<math.h>
int main(){
    int n1, n, valor100, valor50, valor20, valor10, valor5, valor2, valor1;
    scanf("%i", &n1);
    n = n1;
    valor100 = n / 100;
    n = n - valor100*100;
    valor50 = n / 50;
    n = n - valor50*50;
    valor20 = n / 20;
    n = n - valor20*20;
    valor10 = n / 10;
    n = n - valor10*10;
    valor5 = n / 5;
    n = n - valor5*5;
    valor2 = n / 2;
    n = n - valor2*2;
    valor1 = n / 1;
    printf("%i\n", n1);
    printf("%i nota(s) de R$ 100,00\n", valor100);
    printf("%i nota(s) de R$ 50,00\n", valor50);
    printf("%i nota(s) de R$ 20,00\n", valor20);
    printf("%i nota(s) de R$ 10,00\n", valor10);
    printf("%i nota(s) de R$ 5,00\n", valor5);
    printf("%i nota(s) de R$ 2,00\n", valor2);
    printf("%i nota(s) de R$ 1,00\n", valor1);
    printf("");
}
