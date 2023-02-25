#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int gremio, inter, empate, vezes;
    gremio = inter = empate = vezes = 0;
    int vez = 1;
    string j = "oi";
    while(true){
        int a, b;
        cin >> a >> b;
        if(a > b){
            inter += 1;
        }
        if(a < b){
            gremio += 1;
        }
        if(a == b){
            empate += 1;
        }
        vezes += 1;
        string escolha;
        cin >> escolha;
        if(escolha == "1"){
            vez += 1;
        }
        if(escolha == "2"){
            break;
        }
    }
    for(int i = 0; i < vez; i++){
        cout << "Novo grenal (1-sim 2-nao)\n";
    }
    if(inter > gremio and inter > empate){
        j = "Inter";
    }
    if(gremio > inter and gremio > empate){
        j = "Gremio";
    }
    if(empate > gremio and empate > inter){
        j = "Nao houve vencedor";
    }
    cout << vezes << " grenais\nInter:" << inter << "\n" << "Gremio:" << gremio << "\n" << "Empates:" << empate << "\n" << j << " venceu mais\n";
}
