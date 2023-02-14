#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double nota1, nota2, nota3, soma;
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    soma = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << soma << endl;
}
