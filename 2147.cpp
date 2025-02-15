#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    int numero_casos;
    string palavra;
    cin >>numero_casos;
    for(int i = 0; i < numero_casos; i++){
        cin >> palavra;
        cout << fixed << setprecision(2);
        cout << (palavra.size())*0.01 << endl;
    }
    return 0;
}
