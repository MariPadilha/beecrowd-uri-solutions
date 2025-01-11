#include <iostream>
#include <string>
using namespace std;

int main(){
    string linha;
    int vezes = 0, soma = 0;
    while(true){
        getline(cin, linha);
        if(linha == "caw caw"){
            vezes += 1;
            cout << soma << endl;
            soma = 0;
        }else{
            if(linha[0] == '*' && linha[1] == '-' && linha[2] == '-')
                soma += 4;
            else if(linha[0] == '-' && linha[1] == '-' && linha[2] == '*')
                soma += 1;
            else if(linha[0] == '*' && linha[1] == '*' && linha[2] == '*')
                soma += 7;
            else if(linha[0] == '*' && linha[1] == '-' && linha[2] == '*')
                soma += 5;
            else if(linha[0] == '*' && linha[1] == '*' && linha[2] == '-')
                soma += 6;
            else if(linha[0] == '-' && linha[1] == '*' && linha[2] == '*')
                soma += 3;
        }if(vezes == 3)
            break;
    }
    return 0;
}
