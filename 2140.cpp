#include <iostream>
using namespace std;
int main(){
    int numero1, numero2, h, nota, valor10, valor100, valor2, valor20, valor5, valor50;
    while(true){
        cin >> numero1 >> numero2;
        int nota = 0;
        if(numero1 == numero2 && numero1 == 0)
            break;
        if(4 > numero2 - numero1 || numero2 - numero1 > 200)
            cout << "impossible\n";
        if(numero2 - numero1 == 100 || numero2 - numero1 == 20 || numero2 - numero1 == 10)
            cout << "possible\n";
        else{
            h = numero2 - numero1;
            valor100 = (int) h/100;
            nota+= valor100;
            h -= valor100*100;

            valor50 =  (int)h / 50;
            nota += valor50;
            h -= valor50 * 50;

            valor20 =  (int)h / 20;
            nota += valor20;
            h -= valor20 * 20;

            valor10 =  (int)h / 10;
            nota += valor10;
            h -= valor10 * 10;

            valor5 =  (int)h / 5;
            nota += valor5;
            h -= valor5 * 5;

            valor2 =  (int)h / 2;
            nota += valor2;
            h -= valor2 * 2;
        }
        if(nota == 2)
            cout << "possible\n";
    }
}
