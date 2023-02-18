#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double salario, percent, reajuste;
    cin >> salario;
    if(salario < 400.01){
        percent = salario * (15.0/100.0);
        reajuste = salario + percent;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << reajuste << "\nReajuste ganho: " << percent << "\nEm percentual: 15 %" << endl;
    }
    else if(salario < 800.01){
        percent = salario * (12.0/100.0);
        reajuste = salario + percent;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << reajuste << "\nReajuste ganho: " << percent << "\nEm percentual: 12 %" << endl;
    }
    else if(salario < 1200.01){
        percent = salario * (10.0/100.0);
        reajuste = salario + percent;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << reajuste << "\nReajuste ganho: " << percent << "\nEm percentual: 10 %" << endl;
    }
    else if(salario <= 2000.0){
        percent = salario * (7.0/100.0);
        reajuste = salario + percent;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << reajuste << "\nReajuste ganho: " << percent << "\nEm percentual: 7 %" << endl;
    }
    else if(salario > 2000.0){
        percent = salario * (4.0/100.0);
        reajuste = salario + percent;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << reajuste << "\nReajuste ganho: " << percent << "\nEm percentual: 4 %" << endl;
    }
    return 0;
}
