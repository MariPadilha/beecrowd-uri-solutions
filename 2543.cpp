#include <iostream>
using namespace std;

int main(){
    int numero_casos, id, chave, escolha, soma;
    while(cin >> numero_casos){
        soma = 0;
        cin >> id;
        for(int i = 0; i < numero_casos; i++){
            cin >> chave >> escolha;
            if(id == chave && escolha == 0)
                soma++;
        }
        cout << soma << endl;
    }
    return 0;        
}
