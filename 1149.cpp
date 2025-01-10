#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int valor1, valor2, acumulador=0;
    cin >> valor1 >> valor2;
    while(valor2<1){
        cin >> valor2;
    }
    for(int i = valor1; i < valor1+valor2; i++)
        acumulador+=i;
    cout << acumulador << endl;
    return 0;
}
