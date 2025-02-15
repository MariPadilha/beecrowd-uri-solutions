#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int numero;
    cin >> numero;
    cout << fixed << setprecision(1);
    cout << (numero/log(numero)) << " " << 1.25506*(numero/log(numero)) <<endl;
    return 0;
}
