#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    double lista[] = {a,b,c};
    sort(lista, lista + 3);
    a=lista[2];b = lista[1]; c=lista[0];
    int sinal = 0;
    if(a >= b+c)
        cout << "Invalido\n";
    else{
        if(a!=b && c!=b){
            cout << "Valido-Escaleno\n";
        }
        if(a==b && b==c && sinal==0){
            cout << "Valido-Equilatero\n";
        }
        if(a==b && b!=c || a==c && c!=b || b==c && c!=a){
            cout << "Valido-Isoceles\n";
        }
        if(pow(a,2) == pow(b,2) + pow(c,2)){
            cout << "Retangulo: S\n";
        }else{
            cout << "Retangulo: N\n";
        }
    }
}
