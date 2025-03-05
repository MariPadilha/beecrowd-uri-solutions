#include <iostream>
#include <cmath>
using namespace std;
long long resultado;

int Jutsu(int numero){
    if(pow(2, numero)==resultado){
        return numero;
    }
    return Jutsu(numero+1);
}
int main(){
    while(cin >> resultado){
        cout << Jutsu(0) << endl;
    }
    return 0;        
}
