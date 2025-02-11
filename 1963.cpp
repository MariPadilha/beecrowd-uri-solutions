#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float numero1, numero2;
    cin >> numero1 >> numero2;
    cout << fixed << setprecision(2);
    cout << ((numero2-numero1)*100/numero1) << "%\n";
    return 0;
}
