#include <iostream>
#include <string>
using namespace std;
int count(char n, string sequencia){
    int contador = 0;
    for(int i = 0; i < sequencia.size(); i++){
        if(sequencia[i]=='1')
            contador++;
    }
    return contador;
}
int main(){
    string sequencia;
    cin >> sequencia;
    int quantidade_1 = count('1', sequencia);
    if(quantidade_1 % 2 == 0)
        cout << sequencia << "0\n";
    else
        cout << sequencia << "1\n";
    return 0;
}
