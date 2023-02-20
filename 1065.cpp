#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int s, c, c1;
    s = 0;
    for(c = 1; c < 6; c++){
        cin >> c1;
        if(c1 % 2 == 0){
            s += 1;
        }
    }
    cout << s << " valores pares" << endl;
    return 0;
}
