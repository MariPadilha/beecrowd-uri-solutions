#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int numero_casos, numero_consultas, numero;
    vector <int> cidadaos;
    while(cin >> numero_casos){
        cin >> numero_consultas;
        cidadaos.clear();

        for(int i = 0; i < numero_casos; i++){
            cin >> numero;
            cidadaos.push_back(numero);
        }
        
        sort(cidadaos.begin(), cidadaos.end(), greater<int>());

        for(int i = 0; i < numero_consultas; i++){
            cin >> numero;
            cout << cidadaos[numero-1] << endl;
        }
    }
    return 0;        
}
