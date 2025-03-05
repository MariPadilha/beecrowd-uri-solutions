#include <iostream>
using namespace std;

int main(){
    int numero_casos, altura_maxima, altura_minima, altura, contador;
    while(cin >> numero_casos){
        cin >> altura_minima >> altura_maxima;
        contador = 0;
        for(int i = 0; i < numero_casos; i++){
            cin >> altura;
            if(altura>=altura_minima && altura<=altura_maxima)
                contador++;
        }
        cout << contador << endl;
    }
    return 0;        
}
