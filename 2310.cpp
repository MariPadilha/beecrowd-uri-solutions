#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double numero_casos, saque, total_saque=0, bloqueio, total_bloqueio=0, ataque, total_ataque = 0, sucesso_bloqueio = 0, sucesso_ataque=0, sucesso_saque=0;
    cin >> numero_casos;
    string nome;
    for(int i = 0; i < numero_casos; i++){
        cin >> nome;
        cin >> saque >> bloqueio >> ataque;
        total_ataque+=ataque;
        total_bloqueio+=bloqueio;
        total_saque+=saque;
        cin >> saque >> bloqueio >> ataque;
        sucesso_ataque+=ataque;
        sucesso_bloqueio+=bloqueio;
        sucesso_saque+=saque;
    }
    cout << fixed << setprecision(2);
    cout << "Pontos de Saque: " << sucesso_saque*100.00/total_saque << " %.\n";
    cout << "Pontos de Bloqueio: " << sucesso_bloqueio*100.00/total_bloqueio << " %.\n";
    cout << "Pontos de Ataque: " << sucesso_ataque*100.00/total_ataque << " %.\n";
    return 0;
}
