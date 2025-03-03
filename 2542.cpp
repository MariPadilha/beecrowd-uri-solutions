#include <iostream>
#include <vector>
using namespace std;

int main(){
    int atributos, n_cartas_marco, n_cartas_leo, escolha_marco, escolha_leo, atributo_sorteado;
    unsigned long long numero;
    vector <vector<unsigned long long> > cartas_marco;
    vector <vector<unsigned long long> > cartas_leonardo;
    vector <unsigned long long> linha;

    while(cin >> atributos){
        cartas_leonardo.clear();
        cartas_marco.clear();
        linha.clear();
        cin >> n_cartas_marco >> n_cartas_leo;

        for(int i = 0; i < n_cartas_marco; i++){
            for(int j = 0; j < atributos; j++){
                cin >> numero;
                linha.push_back(numero);
            }
            cartas_marco.push_back(linha);
            linha.clear();
        }

        for(int i = 0; i < n_cartas_leo; i++){
            for(int j = 0; j < atributos; j++){
                cin >> numero;
                linha.push_back(numero);
            }
            cartas_leonardo.push_back(linha);
            linha.clear();
        }

        cin >> escolha_marco >> escolha_leo >> atributo_sorteado;

        if(cartas_leonardo[escolha_leo-1][atributo_sorteado-1] == cartas_marco[escolha_marco-1][atributo_sorteado-1])
            cout << "Empate\n";
        else if(cartas_leonardo[escolha_leo-1][atributo_sorteado-1] > cartas_marco[escolha_marco-1][atributo_sorteado-1])
            cout << "Leonardo\n";
        else
            cout << "Marcos\n";
    }
    return 0;        
}
