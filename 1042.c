#include <stdio.h>
int main(){
    int a,b,c,d,e,f;
    scanf("%i%i%i", &a,&b,&c);
    if(a > b && a > c){
        d = a;
        if(b > c){
            e = b;
            f = c;}
        else{
            e = c;
            f = b;}}
    if(b > a && b > c){
        d = b;
        if(a > c){
            e = a;
            f = c;}
        else{
            e = c;
            f = a;}}
    if(c > a && c > b){
        d = c;
        if(a > b){
            e = a;
            f = b;}
        else{
            f = a;
            e = b;}}
    printf("%i\n",f);
    printf("%i\n",e);
    printf("%i\n",d);
    printf("\n");
    printf("%i\n",a);
    printf("%i\n",b);
    printf("%i\n",c);
}
