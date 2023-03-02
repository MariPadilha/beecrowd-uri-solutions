#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int T;
    cin >> T;
    int k = 0;
    while(true){
        for(int x = 0; x < T; x++){
            cout << "N[" << k << "] = " << x << "\n";
            k += 1;
            if(k == 1000){
                break;
            }
        }
        if(k == 1000){
            break;
        }
    }
}
