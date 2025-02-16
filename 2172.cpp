#include <iostream>
using namespace std;

int main(){
    while(true){
        int a, b;
        cin >> a >> b;
        if(a == b && b == 0)
            break;
        cout << a*b << endl;
    }
    return 0;
}
