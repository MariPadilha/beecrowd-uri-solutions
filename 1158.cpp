#include <iostream>
using namespace std;
int main(){
    int x, y, soma, m, i, n;
    cin >> n;
    for(i = 0; i < n; i++){
        soma = 0;
        cin >> x >> y;
        for(m = x; m < (x + y * 2); m++){
            if(m % 2 != 0){
                soma += m;
            }
        }
        cout << soma << "\n";
    }
}
