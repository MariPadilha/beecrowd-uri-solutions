#include <iostream>
using namespace std;

int main(){
    int n1, ano, mes;
    cin >> n1;
    ano = n1 / 365;
    n1 = n1 - ano * 365;
    mes = n1 / 30;
    n1 = (n1 - mes * 30);
    cout << ano << " ano(s)" << "\n";
    cout << mes << " mes(es)" << "\n";
    cout << n1 << " dia(s)" << endl;
}
