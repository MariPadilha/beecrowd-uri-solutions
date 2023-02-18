#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double A, B, C, delta, quadra, x1, x2;
    cin >> A >> B >> C; 
    if(A == 0){
        cout << "Impossivel calcular" << endl;
    }
    if(A > 0){
        delta = pow(B,2)-4*A*C;
        if(delta < 0){
            cout << "Impossivel calcular" << endl;
        }
        else if(delta > 0){
            quadra = sqrt(delta);
            x1 = (-B + quadra)/(2*A);
            if(x1 == 0){
                cout << "Impossivel calcular" << endl;
            }
            else{
                cout << fixed << setprecision(5);
                cout << "R1 = " << x1 << "\n";
            }
            x2 = (-B - quadra) / (2 * A);
            if(x2 == 0){
                cout << "Impossivel calcular" << endl;
            }
            else{
                cout << fixed << setprecision(5);
                cout << "R2 = " << x2 << endl;
            }
        }
    }   
}
