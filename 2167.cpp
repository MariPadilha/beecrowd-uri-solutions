#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int posicao_queda = 0, numero_casos, numero_anterior=0, numero_atual;
    cin >> numero_casos;
    for(int i = 0; i < numero_casos; i++){
        cin >> numero_atual;
        if(numero_atual < numero_anterior){
            posicao_queda = i+1;
            break;
        }
        numero_anterior = numero_atual;
    }
    cout << posicao_queda << endl;
    return 0;
}
