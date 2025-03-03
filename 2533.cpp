#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float nota, somatorio_nota_carga, carga, somatorio_carga, resultado;
    int numero_casos;
    while(cin >> numero_casos){
        somatorio_carga = 0;
        somatorio_nota_carga = 0;
        for(int i = 0; i < numero_casos; i++){
            cin >> nota >> carga;
            somatorio_carga+=carga;
            somatorio_nota_carga+=(nota*carga);
        }
        resultado = somatorio_nota_carga/(somatorio_carga);
        cout << fixed << setprecision(4);
        cout << resultado/100.0 << endl;
    }
    return 0;        
}
