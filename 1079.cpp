#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    double a, b, c;
    double lista[n];
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        double media = (2.0 * a) + (3.0 * b) + (5.0 * c);
        media = media / 10.0;
        lista[i] = media;
    }
    for(int h = 0; h < n; h++){
        cout << fixed << setprecision(1);
        cout << lista[h] << "\n";
    }
}
