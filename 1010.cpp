#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int qtde1, qtde2, cod1, cod2;
    double valor1, valor2, total;
    cin >> cod1 >> qtde1 >> fixed >> setprecision(2) >> valor1 >> cod2 >> qtde2 >> fixed >> setprecision(2) >> valor2;
    total = (qtde1 * valor1) + (qtde2 * valor2);
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;
    
    return 0;
}
