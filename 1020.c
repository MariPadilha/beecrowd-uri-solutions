#include <stdio.h>
int main(){
    int n1, ano, mes;
    scanf("%i", &n1);
    ano = n1 / 365;
    n1 = n1 - ano * 365;
    mes = n1 / 30;
    if(mes >= 12){
        n1 = (n1 - mes * 30);}
    else{
        n1 = (n1 - mes * 30);}
    printf("%i ano(s)\n", ano);
    printf("%i mes(es)\n", mes);
    printf("%i dia(s)\n", n1);
}
