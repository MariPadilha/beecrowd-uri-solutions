#include <iostream>
#include <string>
using namespace std;

int main(){
    unsigned long long numero = 0;
    string patinhos;
    while(true){
        cin >> patinhos;
        if(patinhos == "-1")
            break;
        numero = stoull(patinhos);
        if(numero == 0)
            cout << "0\n";
        else
            cout << numero-1 << endl;
    }
}
