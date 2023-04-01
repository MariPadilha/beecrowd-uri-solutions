#include <iostream>
using namespace std;
int main(){
    int n;
    int menor = 0, posicao = 0;
    cin >> n;
    cin >> menor;
    for(int i = 1; i < n; i++){
        int p;
        cin >> p;
        if(p < menor){
            menor = p;
            posicao = i;
        }
    }
    cout << "Menor valor: " << menor << "\nPosicao: " << posicao << endl;
}
