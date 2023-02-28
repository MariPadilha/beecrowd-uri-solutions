#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x, y, z;
    cin >> x;
    y = x+1;
    while(true){
        z;
        cin >> z;
        if(z >= y){
            break;
        }
    }
    int numeros = 1;
    for(int i = x+1; i < z+1; i++){
        x += i;
        numeros += 1;
        if(x >= z){
            break;
        }
    }
    cout  << numeros << endl;
}
