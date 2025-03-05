#include <iostream>
#include <string>
using namespace std;

int main(){
    int numero_casos;
    string pergunta;
    cin >> numero_casos;
    for(int i = 0; i < numero_casos; i++){
        getline(cin, pergunta);
        cout << "I am Toorg!\n";
    }
    return 0;        
}
