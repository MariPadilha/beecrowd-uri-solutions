#include <iostream>
using namespace std;

int main(){
    int numero_casos, contador, numero;
    while(cin >> numero_casos){
        contador = 0;
        for(int i = 0; i < numero_casos; i++){
            cin >> numero;
            if(numero == 1)
                contador++;
        }
        if((double)contador/(double)numero_casos >= 2.0/3.0){
            cout << "impeachment\n";
        }else{
            cout << "acusacao arquivada\n";
        }
    }
    return 0;        
}
