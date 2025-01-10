#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float resultado = 0, matriz[12][12];
    int coluna;
    char opcao;
    cin >> coluna;
    cin >> opcao;
    for(int i = 0; i <12; i++){
        for(int j = 0; j< 12; j++){
            cin >> matriz[i][j];
            if(coluna == j)
                resultado += matriz[i][j];
        }
    }
    if(opcao == 'S'){
        cout << fixed << setprecision(1);
        cout << resultado << endl;
    }else{
        cout << fixed << setprecision(1);
        cout << (resultado/12.0) << endl;
    }
    return 0;
}
