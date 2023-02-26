#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n, g, vezes;
    cin >> n;
    vezes = 0;
    g = 1;
    while(true){
        for(int i = g; i < g+3; i++){
            cout << i << " ";
        }
        cout << "PUM\n";
        g += 4;
        vezes += 1;
        if(vezes == n){
            break;
        }
    }
}
