#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double distancia, combustivel, consumo;
    cin >> distancia;
    cin >> combustivel;
    consumo = distancia / combustivel;
    cout << fixed << setprecision(3);
    cout << consumo << " km/l" << endl;
}
