#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, fim;
    cin >> n >> fim;
    for(int i = 1; i < fim+1; i+=n){
        for(int j = i; j < i+n; j++){
            if(j == i+n-1){
                cout << j << "\n";
            }
            else{
                cout << j << " ";
            }
        }
    }
}
