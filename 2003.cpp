#include <iostream>
using namespace std;
int main(){
    string horario;
    int hora, minuto, soma;
    while(cin >> horario){
        hora = stoi(horario.substr(0, 1));
        minuto = stoi(horario.substr(2, 4));
        soma = 0;
        minuto+=60;
        if(minuto >= 60){
            hora++;
            minuto -= 60;
        }
        if(hora > 8)
            soma += 60*(hora-8);
        if(hora >= 8 && minuto > 0)
            soma += minuto;
        cout << "Atraso maximo: "<< soma << endl;
    }
    return 0;
}
