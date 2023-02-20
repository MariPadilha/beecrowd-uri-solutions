#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int c;
    double s, m, c1;
    s = 0;
    m = 0;
    for(c = 1; c < 7; c++){
        cin >> c1;
        if(c1 > 0){
            s += 1;
            m += c1;
        }
    }
    cout << s << " valores positivos\n";
    cout << fixed << setprecision(1);
    cout << m/s << endl;
    return 0;
}
