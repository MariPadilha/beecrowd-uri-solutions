#include <iostream>
using namespace std;

int main(){
    int j1, n1, n2, r, a, soma;
    cin >> j1 >> n1 >> n2 >> r >> a;
    soma = n1+n2;
    if(soma % 2 == 0){
        if(j1){
            if(r && a)
                cout << "Jogador 2 ganha!\n";
            else
                cout << "Jogador 1 ganha!\n";
        }else{
            if(!r){
                if(a)
                    cout << "Jogador 1 ganha!\n";
                else
                    cout << "Jogador 2 ganha!\n";
            }else{
                if(!a)
                    cout << "Jogador 1 ganha!\n";
                else
                    cout << "Jogador 2 ganha!\n";
            }
        }
    }else{
        if(!j1){
            if(r && a)
                cout << "Jogador 2 ganha!\n";
            else
                cout << "Jogador 1 ganha!\n";
        }else{
            if(!r){
                if(a)
                    cout << "Jogador 1 ganha!\n";
                else
                    cout << "Jogador 2 ganha!\n";
            }else{
                if(!a)
                    cout << "Jogador 1 ganha!\n";
                else
                    cout << "Jogador 2 ganha!\n";
            }
        }
    }
    return 0;
}
