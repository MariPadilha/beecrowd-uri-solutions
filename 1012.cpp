#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a,b,c,triangulo,circulo,trapezio,quadrado,retangulo;
    cin >> a >> b >> c;
    triangulo = (a * c)/2;
    circulo = 3.14159 * (c * c);
    trapezio = c * (a + b) / 2;
    quadrado = b * b;
    retangulo = a * b;
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << triangulo << "\n";
    cout << fixed << setprecision(3);
    cout << "CIRCULO: " << circulo << "\n";
    cout << fixed << setprecision(3);
    cout << "TRAPEZIO: " << trapezio << "\n";
    cout << fixed << setprecision(3);
    cout << "QUADRADO: " << quadrado << "\n";
    cout << fixed << setprecision(3);
    cout << "RETANGULO: " << retangulo << endl;
}
