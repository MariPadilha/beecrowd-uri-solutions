#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double soma, n;
    soma = 1;
    n = 2;
    for(int i = 3; i < 40; i++){
        if(i % 2 != 0){
            soma += i/n;
            n = n + n;
        }
    }
    cout << fixed << setprecision(2);
    cout << soma << endl;
}
