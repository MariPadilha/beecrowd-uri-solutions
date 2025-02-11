#include <iostream>
using namespace std;

string intParaRomano(int n){
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string numero = "";
    for(int i = 0; i < 13; i++){
        while(n >= valores[i]){
            numero += romanos[i];
            n -= valores[i];
        }
    }
    return numero;
}

int main(){
    int n;
    cin >> n;
    cout << intParaRomano(n) << endl;
    return 0;
}
