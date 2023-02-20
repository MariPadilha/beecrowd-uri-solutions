#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int par, ca, impar, positivo, negativo;
    par = impar = positivo = negativo = 0;
    for(int c = 1; c < 6; c++){
        cin >> ca;
        if(ca%2 == 0){
            par += 1;
        }
        else if(ca&2 != 0){
            impar += 1;
        }
        if(ca > 0){
            positivo += 1;
        }
        else if(ca < 0){
            negativo += 1;
        }
    }
    cout << par << " valor(es) par(es)\n" << impar << " valor(es) impar(es)\n" << positivo << " valor(es) positivo(s)\n" << negativo << " valor(es) negativo(s)" << endl;
    return 0;
}
