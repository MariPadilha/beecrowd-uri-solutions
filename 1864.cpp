#include <iostream>
using namespace std;
int main(){
    string frase = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int numero;
    cin >> numero;
    for(int i = 0; i < numero; i++){
        cout << frase[i];
    }
    cout << endl;
    return 0;
}
