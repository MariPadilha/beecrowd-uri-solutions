#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int b, c;
    cin >> b;
    for(c = 1; c < b+1; c++){
        if(c % 2 != 0){
            cout << c << "\n";
        }
    }
    return 0;
}
