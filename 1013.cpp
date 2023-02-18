#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c, maior, resultado;
    cin >> a >> b >> c;
    maior = (a + b + abs(a - b)) / 2;
    resultado = (maior + c + abs(maior - c)) / 2;
    cout << resultado << " eh o maior" << endl;
    return 0;
}
