#include <iostream>
using namespace std;
int main(){
    while(true){
        int a, b;
        cin >> a >> b;
        if(a > 0 and b > 0){
            cout << "primeiro" << endl;
        }
        if(a < 0 and b > 0){
            cout << "segundo" << endl;
        }
        if(a < 0 and b < 0){
            cout << "terceiro" << endl;
        }
        if(a > 0 and b < 0){
            cout << "quarto" << endl;
        }
        if(a == 0 or b == 0){
            break;
        }
    }
}
