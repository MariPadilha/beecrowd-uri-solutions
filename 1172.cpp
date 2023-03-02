#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int lista[10];
    for(int i = 0; i < 10; i++){
        int n;
        cin >> n;
        if(n == 0 or n < 0){
            lista[i] = 1;
        }
        else{
            lista[i] = n;
        }
    }
    for(int i = 0; i < 10; i++){
        cout << "X[" << i << "] = " << lista[i] << "\n";
    }
}
