#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int valor1, valor2, valor3;
    while(true){
        cin >> valor1;
        if(!valor1)
            break;
        cin >> valor2 >> valor3;
        cout << (int)sqrt(valor1*valor2*100/valor3) << endl;
    }
    return 0;
}
