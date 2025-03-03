#include <iostream>
using namespace std;

int main(){
    string alfabeto;
    while(cin >> alfabeto){
        int numero_casos, numero;
        cin >> numero_casos;
        for(int i = 0; i < numero_casos; i++){
            cin >> numero;
            cout << alfabeto[numero-1];
        }
        cout << endl;
    }
    return 0;        
}
