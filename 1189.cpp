#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double resultado = 0, matriz[12][12];
    char opcao;
    cin >> opcao;
    for(int i = 0; i <12; i++){
        for(int j = 0; j< 12; j++){
            cin >> matriz[i][j];
            if(j+i <= 10 && j<i)
                resultado += matriz[i][j];
        }
    }
    if(opcao == 'S'){
        cout << fixed << setprecision(1);
        cout << resultado << endl;
    }else{
        resultado/=30.0;
        cout << fixed << setprecision(1);
        cout << resultado << endl;
    }
    return 0;
}
