#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int linha, coluna;
    while(cin >> linha){
        cin >> coluna;
        int alvo_x, alvo_y, personagem_x, personagem_y, numero;
        for(int i = 0; i < linha; i++){
            for(int j = 0; j < coluna; j++){
                cin >> numero;
                if(numero == 2){
                    alvo_x = i;
                    alvo_y = j;
                }else if(numero == 1){
                    personagem_x = i;
                    personagem_y = j;
                }
            }
        }
        int menor_tempo = (max(alvo_x, personagem_x)-min(alvo_x, personagem_x))+(max(alvo_y, personagem_y)-min(alvo_y, personagem_y));
        cout << menor_tempo << endl;
    }
    return 0;        
}
