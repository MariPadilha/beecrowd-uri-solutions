#include <iostream>
using namespace std;
int main(){
    int numero, numero_casos;
    cin >> numero_casos;
    for(int i = 0; i<numero_casos; i++){
        cin >> numero;
        if(numero % 2 == 0){
            cout << 0 << endl;
        }else{
            cout << 1 << endl;
        }
    }
    return 0;
}
