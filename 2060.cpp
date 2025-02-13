#include <iostream>
using namespace std;

int main(){
    int numero_casos, mul2 = 0, mul3 = 0, mul4 = 0, mul5 = 0;
    cin >> numero_casos;
    int numeros[numero_casos];
    for(int i = 0; i < numero_casos; i++){
        cin >> numeros[i];
        if(numeros[i] % 2 == 0)
            mul2++;
        if(numeros[i] % 3 == 0)
            mul3++;
        if(numeros[i] % 4 == 0)
            mul4++;
        if(numeros[i] % 5 == 0)
            mul5++;
    }
    cout << mul2 << " Multiplo(s) de 2\n";
    cout << mul3 << " Multiplo(s) de 3\n";
    cout << mul4 << " Multiplo(s) de 4\n";
    cout << mul5 << " Multiplo(s) de 5\n";
    return 0;
}
