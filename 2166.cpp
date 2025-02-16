#include <iostream>
#include <iomanip>
using namespace std;

double raiz_quadrada2(int n) {
    if (n == 0)
        return 2.0;
    return 2.0 + (1.0 / raiz_quadrada2(n - 1)); 
}

int main() {
    int numero;
    double resultado;
    cin >> numero;
    if(numero != 0)
        resultado = 1.0 + (1.0 / raiz_quadrada2(numero - 1));
    else
        resultado = 1.0;
    cout << fixed << setprecision(10);
    cout << resultado << endl;
    
    return 0;
}
