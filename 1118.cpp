#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double nota_soma = 0; 
    int cont = 0;
    bool continuar = true;
    while(continuar==true){
        double nota;
        cin >> nota;
        if(nota>=0.0 and nota <=10){
            nota_soma += nota;
            cont += 1; 
            if(cont == 2){
                cout << fixed << setprecision(2);
                cout << "media = " << (nota_soma/2) << endl;
                cont = 0; 
                nota_soma = 0;
                while(true){
                    cout << "novo calculo (1-sim 2-nao)" << endl;
                    int novo;
                    cin >> novo;
                    if(novo == 2){
                        continuar = false;
                        break;
                    }
                    else if(novo == 1){
                        continuar = true;
                        break;
                    }
                }
            }
        }    
        else{
            cout << "nota invalida" << endl;
        }
    }
}
