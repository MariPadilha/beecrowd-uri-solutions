#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void menor_que_1(long double* numero, int* acumulador){
    while((*numero) > -1.0 && (*numero) < 1.0){
        (*numero) *= 10.0;
        (*acumulador)--;
    }
}

void maior_que_1(long double* numero, int* acumulador){
    while((*numero) >= 10.0 || (*numero) <= -10.0){
        (*numero) /= 10.0;
        (*acumulador)++;
    }
}

void mostrar(long double numero, int acumulador){
    cout << fixed << setprecision(4);

    if(numero >= 0)
        cout << "+";

    cout << numero << "E";

    if(acumulador >= 0)
        cout << "+";
    else
        cout << "-";

    if(abs(acumulador) < 10)
        cout << "0";
    cout << abs(acumulador) << endl;
}

void notacao_cientifica(string n){
    int acumulador = 0;
    long double numero = stold(n);
    if(numero == 0.0){
        (n[0]=='-')? cout << "-0.0000E+00" : cout << "+0.0000E+00";
        cout << endl;
        return;
    }else if(numero < 1.0 && numero > -1.0){
        menor_que_1(&numero, &acumulador);
    }else{
        maior_que_1(&numero, &acumulador);
    }
    mostrar(numero, acumulador);
}

int main(){
    string numero;
    cin >> numero;
    notacao_cientifica(numero);
    return 0;
}
