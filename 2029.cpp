#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double volume, raio, altura;
    while(cin >> volume){
        cin >> raio;
        raio/=2;
        altura = volume/(3.14*raio*raio);
        
        cout<<fixed<<setprecision(2);
        cout << "ALTURA = " << altura << endl;
        cout << "AREA = " << 3.14*(raio*raio) << endl;
    }
    return 0;
}
