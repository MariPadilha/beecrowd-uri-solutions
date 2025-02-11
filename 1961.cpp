#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int altura_pulo, numero_canos;
    cin >> altura_pulo >> numero_canos;
    int canos[numero_canos];
    cin >> canos[0];
    for(int i = 1; i < numero_canos; i++){
        cin >> canos[i];
        if(max(canos[i-1], canos[i]) - min(canos[i-1], canos[i]) > altura_pulo){
            cout << "GAME OVER\n";
            return 0;
        }
    }
    cout << "YOU WIN\n";
    return 0;
}
