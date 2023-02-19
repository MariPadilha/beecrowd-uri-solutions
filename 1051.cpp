#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double salario, imposto;
    cin >> salario;
    if(salario < 2000.01){
        cout << "Isento" << endl;
    }
    else if(salario < 3000.01){
        imposto = ((salario - 2000.0) * 0.08);
        cout << fixed << setprecision(2);
        cout << "R$ " << imposto << endl;
    }
    else if(salario <= 4500){
        imposto = (1000.0 * 0.08 + (salario - 3000.0) * 0.18);
        cout << fixed << setprecision(2);
        cout << "R$ " << imposto << endl;
    }
    else if(salario > 4500){
        imposto = (1000.0 * 0.08 + 1500.0 * 0.18 + (salario - 4500.0) * 0.28);
        cout << fixed << setprecision(2);
        cout << "R$ " << imposto << endl;
    }
    return 0;
}
