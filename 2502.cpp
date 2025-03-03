#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main(){
    int tamanho_chave, numero_casos;
    bool upper;
    string linha;
    while(cin >> tamanho_chave){
        string palavra_certa, palavra_chave;
        cin >> numero_casos;
        cin.ignore();
        getline(cin, palavra_certa);
        getline(cin, palavra_chave);

        transform(palavra_certa.begin(), palavra_certa.end(), palavra_certa.begin(), ::tolower);
        transform(palavra_chave.begin(), palavra_chave.end(), palavra_chave.begin(), ::tolower);

        for(int i = 0; i < numero_casos; i++){
            getline(cin, linha);
            for(int j = 0; j < linha.size(); j++){
                char original = linha[j];
                linha[j] = tolower(linha[j]);

                size_t pos = palavra_chave.find(linha[j]);
                if(pos != string::npos){
                    linha[j] = palavra_certa[pos];
                }else{
                    pos = palavra_certa.find(linha[j]);
                    if(pos != string::npos){
                        linha[j] = palavra_chave[pos];
                    }
                }

                if(isupper(original)){
                    linha[j] = toupper(linha[j]);
                }
            }
            cout << linha << endl;
        }
        cout << endl;
    }
    return 0;        
}
