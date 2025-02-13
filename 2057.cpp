#include <iostream>
using namespace std;

int main(){
    int hora_saida, tempo_viagem, fuso_destino, fuso=0;
    cin>>hora_saida>>tempo_viagem>>fuso_destino;
    fuso += hora_saida;
    fuso += tempo_viagem;
    fuso += fuso_destino;
    if(fuso < 0)
        fuso = 24 - abs(fuso);
    else if(fuso > 24)
        fuso = fuso - 24;
    cout << fuso << endl;
    return 0;
}
