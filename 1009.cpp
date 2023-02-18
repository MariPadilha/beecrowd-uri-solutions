#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string nome;
    double salfixo, qtvendas, total;
    cin >> nome;
    cin >> salfixo;
    cin >> qtvendas;
    total = salfixo + (qtvendas * (15.0/100.0));
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << total << endl;
}
