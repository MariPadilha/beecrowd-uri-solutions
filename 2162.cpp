#include <iostream>
using namespace std;

int main() {
    bool is_nlogonia = true;
    int numero_casos;
    cin >> numero_casos;
    int alturas[numero_casos];

    for(int i = 0; i < numero_casos; i++){
        cin >> alturas[i];
    }
    if(numero_casos==2 && alturas[0]== alturas[1])
        is_nlogonia = false;
    else{
        for(int i = 1; i < (numero_casos-1); i++){
            if(((alturas[i]<=alturas[i-1]) && (alturas[i+1]<=alturas[i])) || ((alturas[i]>=alturas[i-1])&&(alturas[i+1]>=alturas[i]))){
                is_nlogonia = false;
            }
        }
    }
    if(is_nlogonia)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
