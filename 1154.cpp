#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double vezes, lista;
    vezes = 0;
    lista = 0;
    while (true){
        double a;
        cin >> a;
        if(a < 0){
            break;
        }
        lista += a;
        vezes += 1;
    }
    double c = lista / vezes;
    cout << fixed << setprecision(2);
    cout << c << endl;
}
