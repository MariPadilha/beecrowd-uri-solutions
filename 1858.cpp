#include <iostream>
using namespace std;

int main(){
    int numero_casos, menor, numero, posicao=1;
    cin >> numero_casos;
    cin >> menor;
    for(int i = 1; i<numero_casos; i++){
        cin >> numero;
        if(numero<menor){
            posicao=i+1;
            menor = numero;
        }
        
    }
    cout << posicao << endl;
}
