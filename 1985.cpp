#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double acumulador=0, numero, numero_casos;
    int opcao;
    cin >> numero_casos;
    for(int i = 0; i < numero_casos; i++){
        cin >> opcao >> numero;
        switch (opcao){
            case 1001:
                acumulador+=(1.5*numero);
                break;
            case 1002:
                acumulador+=(2.5*numero);
                break;
            case 1003:
                acumulador+=(3.5*numero);
                break;
            case 1004:
                acumulador+=(4.5*numero);
                break;
            case 1005:
                acumulador+=(5.5*numero);
                break;
        }
    }
    cout << fixed << setprecision(2);
    cout << acumulador << endl;
    return 0;
}
