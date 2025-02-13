#include <iostream>
using namespace std;

int main(){
    int numero;
    string jogador1, jogador2;
    cin >> numero;
    for(int i = 0; i < numero; i++){
        cin >> jogador1;
        cin >> jogador2;
        if(jogador1 == "ataque" || jogador2 == "ataque"){
            if(jogador1 == jogador2)
                cout << "Aniquilacao mutua\n";
            else{
                if(jogador1 == "ataque")
                    cout << "Jogador 1 venceu\n"; 
                else
                    cout << "Jogador 2 venceu\n";
            }
        }else if(jogador1 == "pedra" || jogador2 == "pedra"){
            if(jogador1 == jogador2)
                cout << "Sem ganhador\n";
            else{
                if(jogador1 == "pedra")
                    cout << "Jogador 1 venceu\n";
                else
                    cout << "Jogador 2 venceu\n";
            }
        }else
            cout << "Ambos venceram\n";
    }
    return 0;
}
