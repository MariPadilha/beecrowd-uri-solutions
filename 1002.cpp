#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double raio, area;
    cin >> raio;
    area = (raio * raio) * 3.14159;
    cout << fixed << setprecision(4);
    cout << "A=" << area << endl;
}
