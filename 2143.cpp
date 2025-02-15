#include <iostream>
using namespace std;
int main(){
    while(true){
        int numero_casos, numero_pessoas;
        cin >> numero_casos;
        if(!numero_casos)
            break;
        for(int i = 0; i < numero_casos; i++){
            cin >> numero_pessoas;
            if(numero_pessoas % 2 == 0)
                cout << numero_pessoas * 2-2 << endl;
            else
                cout << numero_pessoas * 2-1 << endl;
        }
    }
}
