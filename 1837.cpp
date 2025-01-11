#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, h = 0, f = 0;

    cin >> a >> b;

    h = a / b;
    f = a % b;

    if(f < 0){
        if(b < 0){
            h++;
        }else{
            h--;
        }
        f += abs(b);
    }

    cout << h << " " << f << endl;

    return 0;
}
