#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b, c;
    cin >> a;
    for(int i = 1; i < a+1; i++){
        b = pow(i, 2);
        c = b * i;
        cout << i << " " << b << " " << c << "\n" << i << " " << b+1 << " " << c+1 << "\n";
    }
}
