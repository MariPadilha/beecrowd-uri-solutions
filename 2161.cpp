#include <iostream>
#include <iomanip>
using namespace std;

double raiz_quadrada10(int n) {
    if (n == 0)
        return 6.0;
    return 6.0 + (1.0 / raiz_quadrada10(n - 1)); 
}

int main() {
    int numero;
    double resultado;
    cin >> numero;
    if(numero != 0)
        resultado = 3.0 + (1.0 / raiz_quadrada10(numero - 1));
    else
        resultado = 3.0;
    cout << fixed << setprecision(10);
    cout << resultado << endl;
    
    return 0;
}
