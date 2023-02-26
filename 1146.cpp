#include <iostream>
#include <cmath>
using namespace std;
int main(){
    while(true){
        int n;
        cin >> n;
        if(n == 0){
            break;
        }
        for(int i = 1; i < n; i++){
            cout << i << " ";
        }
        cout << n << "\n"
    }
}
