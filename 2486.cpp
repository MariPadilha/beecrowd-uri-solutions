#include <iostream>
#include <string>
using namespace std;

int main(){
    int numero_casos, mg, numero, pos;
    string frase, fruta;
    while(true){
        cin >> numero_casos;
        cin.ignore();
        if(numero_casos == 0)
            break;
        mg = 0;
        for(int i = 0; i < numero_casos; i++){
            getline(cin, frase);
            pos = frase.find(" ");
            numero = stoi(frase.substr(0, pos));
            fruta = frase.substr(pos+1);
            if(fruta == "suco de laranja")
                mg += numero*120;

            else if(fruta == "morango fresco")
                mg += numero*85;

            else if(fruta == "mamao")
                mg += numero*85;

            else if(fruta == "goiaba vermelha")
                mg += numero*70;

            else if(fruta == "manga")
                mg += numero*56;

            else if(fruta == "laranja")
                mg += numero*50;

            else if(fruta == "brocolis")
                mg += numero*34;
        }
        if(mg > 130)
            cout << "Menos "<< mg-130 << " mg\n";
        else if(mg >= 110)
            cout << mg << " mg\n";
        else
            cout << "Mais " << 110-mg << " mg\n";
    }
    return 0;        
}
