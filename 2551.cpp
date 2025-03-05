#include <iostream>
using namespace std;

int main(){
    int numero_casos;
    double tempo, distancia, recorde, velocidade;
    while(cin >> numero_casos){
        recorde = 0;
        for(int i = 0; i < numero_casos; i++){
            cin >> tempo >> distancia;
            velocidade = distancia/(tempo/60.0);
            if(velocidade>recorde){
                cout << i+1 << endl;
                recorde = velocidade;
            }
        }
    }
    return 0;        
}
