#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n1;
    cin >> n1;
    double n = n1;
    int valor100 = (int)(n / 100.0);
    n = n - valor100 * 100;
    int valor50 = (int)(n / 50.0);
    n = n - valor50 * 50;
    int valor20 = (int)(n / 20.0);
    n = n - valor20*20;
    int valor10 = (int)(n / 10.0);
    n = n - valor10*10;
    int valor5 = (int)(n / 5.0);
    n = n - valor5*5;
    int valor2 = (int)(n / 2.0);
    n = n - valor2*2;
    int valor1 = (int)(n / 1.0);
    n = n - valor1*1;
    n = n*10;
    int valor050 = (int)(n / 5);
    n = n - valor050*5;
    int valor025 = (int)(n / 2.5);
    n = n - valor025*2.5;
    int valor010 = (int)(n / 1.0);
    n = n - valor010*1.0;
    int valor05 = (int)(n / 0.5);
    n = n - valor05*0.5;
    cout << "NOTAS:\n" << valor100 << " nota(s) de R$ 100.00\n" << valor50 << " nota(s) de R$ 50.00\n" << valor20 << " nota(s) de R$ 20.00\n" << valor10 << " nota(s) de R$ 10.00\n" << valor5 << " nota(s) de R$ 5.00\n" << valor2 << " nota(s) de R$ 2.00\n" << "MOEDAS:\n" << valor1 << " moeda(s) de R$ 1.00\n" << valor050 << " moeda(s) de R$ 0.50\n" << valor025 << " moeda(s) de R$ 0.25\n" << valor010 << " moeda(s) de R$ 0.10\n" << valor05 << " moeda(s) de R$ 0.05\n";
    cout << fixed << setprecision(0);
    cout << n*10 << " moeda(s) de R$ 0.01" << endl;
}
