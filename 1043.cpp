#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n1, n2, n3, perimetro, area;
    cin >> n1 >> n2 >> n3;
    if(n1 < n2 + n3 and n2 < n1 + n3 and n3 < n1 + n2){
        perimetro = n1 + n2 + n3;
        cout << fixed << setprecision(1);
        cout << "Perimetro = " << perimetro << "\n";
    }
    else{
        area = (n1 + n2) * n3 / 2;
        cout << fixed << setprecision(1);
        cout << "Area = " << area << endl;
    }
    return 0;
}
