#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n % 2 != 0){
        for(int i = 2; i < n; i+=2){
            int h = pow(i, 2);
            cout << i << "^2 = " << h << "\n";
        }
    }
    if(n % 2 == 0){
        for(int i = 2; i < n+1; i+=2){
            int h = pow(i, 2);
            cout << i << "^2 = " << h << "\n";
        }
    }
}
