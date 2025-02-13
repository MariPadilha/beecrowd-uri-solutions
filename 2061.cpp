#include <iostream>
using namespace std;

int main(){
    int abas_abertas, numero_casos;
    string acao;
    cin >> abas_abertas >> numero_casos;
    for(int i = 0; i<numero_casos;i++){
        cin >> acao;
        if(acao == "fechou")
            abas_abertas++;
        else
            abas_abertas--;
    }
    cout << abas_abertas << endl;
    return 0;
}
