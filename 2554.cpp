#include <iostream>
using namespace std;

int main(){
    int n_pessoas, n_datas, contador, livre;
    bool evento_acontece = false;
    string data;
    while(cin >> n_pessoas){
        cin >> n_datas;
        evento_acontece = false;
        for(int i = 0; i < n_datas; i++){
            contador = 0;
            cin >> data;
            for(int j = 0; j < n_pessoas; j++){
                cin >> livre;
                if(livre == 1){
                    contador++;
                }
            }
            if(contador == n_pessoas && evento_acontece == false){
                cout << data << endl;
                evento_acontece = true;
            }
        }
        if(!evento_acontece)
            cout << "Pizza antes de FdI\n";
    }
    return 0;        
}
