#include <iostream>
using namespace std;

int main(){
    double n;
    cin >> n;
    if(n >= 0 and n <= 25){
        cout << "Intervalo [0,25]" << endl;
    }
    if(n > 25 and n <= 50){
        cout << "Intervalo (25,50]" << endl;
    }
    if(n > 50 and n <= 75){
        cout << "Intervalo (50,75]" << endl;
    }
    if(n > 75 and n <= 100){
        cout << "Intervalo (75,100]" << endl; 
    }
    if(n < 0 or n > 100){
        cout << "Fora de intervalo" << endl;
    }
}
