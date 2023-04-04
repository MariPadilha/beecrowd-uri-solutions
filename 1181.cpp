#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int linha;
    cin >> linha;
    string tipo;
    cin >> tipo;
    int matriz[12][12];
    double p;
    double soma = 0;
    for(int i = 0; i < 12; i++){
        for(int a = 0; a < 12; a++){
            cin >> p;
            matriz[i][a] = p;
        }
    }
    for(int i = 0; i < 12; i++){
        soma += matriz[linha][i];
    }
    if(tipo == "S"){
        cout << fixed << setprecision(1);
        cout << soma << endl;
    }
    else{
        cout << fixed << setprecision(1);
        cout << (soma/12) << endl;
    }
}
