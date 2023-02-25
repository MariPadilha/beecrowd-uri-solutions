#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n, numero, f, ratos, coelho, sapo;
    string classi;
    cin >> n;
    f = 0;
    ratos = coelho = sapo = 0;
    for(int i = 0; i < n; i++){
        cin >> numero >> classi;
        f += numero;
        if(classi == "R"){
            ratos += numero;
        }
        if(classi == "C"){
            coelho += numero;
        }
        if(classi == "S"){
            sapo += numero;
        }
    }
    double porcentR = (ratos * 100.0)/f;
    double porcentC = (coelho * 100.0)/f;
    double porcentS = (sapo * 100.0)/f;
    cout << "Total: " << f << " cobaias\n" << "Total de coelhos: " << coelho << "\n";
    cout << "Total de ratos: " << ratos << "\n" << "Total de sapos: " << sapo << "\n";
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << porcentC << " %\nPercentual de ratos: " << porcentR << " %\nPercentual de sapos: " << porcentS << " %\n";
    
}
