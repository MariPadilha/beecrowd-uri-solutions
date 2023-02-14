#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int numfunc, hrtrab;
    double valorhr, salario;
    cin >> numfunc;
    cin >> hrtrab;
    cin >> valorhr;
    salario = hrtrab * valorhr;
    cout << "NUMBER = " << numfunc << "\n";
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salario << endl;
}
