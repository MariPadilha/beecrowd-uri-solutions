#include <iostream>
using namespace std;

int main(){
    int numero_casos, numero;
    cin >> numero_casos;
    for(int i = 0; i<numero_casos; i++){
        cin >> numero;
        if(numero < 2015)
            cout << 2015-numero << " D.C.\n";
        else
            cout << numero-2014 << " A.C.\n";
    }
    return 0;
}
