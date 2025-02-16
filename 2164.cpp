#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main(){
    int numero;
    cin >> numero;
    double fibo = ((pow((1+sqrt(5))/2, numero))-(pow((1-sqrt(5))/2, numero)))/sqrt(5);
    cout << fixed << setprecision(1);
    cout << fibo << endl;
    return 0;
}
