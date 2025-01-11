#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int valor1, valor2, valor3;
    cin >> valor1 >> valor2 >> valor3;
    if(valor1 == valor2){
        if(valor3>valor2)
            cout << ":)\n";
        else
            cout << ":(\n";
        
    }else if(valor1 > valor2){
        if(valor3 >= valor2){
            cout << ":)\n";
        }else if((valor3 < valor2) && (valor1 - valor2)>(valor2 - valor3)){
            cout << ":)\n";
        }else{
            cout << ":(\n";
        }
    }else{
        if(valor3 <= valor2){
            cout << ":(\n";
        }else if(valor3 > valor2 && (valor2 - valor1)>(valor3 - valor2)){
            cout << ":(\n";
        }else{
            cout << ":)\n";
        }
    }
    return 0;
}
