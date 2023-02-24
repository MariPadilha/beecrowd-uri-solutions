#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    double a, b, c;
    cin >> a>> b >> c;
    double lista[3];
    lista[0] = a;
    lista[1] = b;
    lista[2] = c;
    sort(lista, lista + 3);
    a=lista[2];b = lista[1]; c=lista[0];
    int sinal = 0;
    if(a >= b+c){
        cout << "NAO FORMA TRIANGULO" << "\n";
        sinal = 1;
    }
    if(pow(a,2) == pow(b,2) + pow(c,2) and sinal==0){
        cout << "TRIANGULO RETANGULO" << "\n";
    }
    if(pow(a,2) > pow(b,2) + pow(c,2) and sinal==0){
        cout << "TRIANGULO OBTUSANGULO" << "\n";
    }
    if(pow(a,2) < pow(b,2) + pow(c,2) and sinal==0){
        cout << "TRIANGULO ACUTANGULO" << "\n";
    }
    if(a==b and b==c and sinal==0){
        cout << "TRIANGULO EQUILATERO" << "\n";
    }
    if(a==b and b!=c or a==c and c!=b or b==c and c!=a and sinal==0){
        cout << "TRIANGULO ISOSCELES" << "\n";
    }
}
