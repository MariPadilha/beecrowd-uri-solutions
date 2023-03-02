#include <iostream>
using namespace std;
int main(){
    int n, vezes, i;
    cin >> n;
    int lista[n];
    vezes = 0;
    for(i = 0; i < n+1; i++){
        if(i != 0){
            if(n % i == 0){
                lista[vezes] = i;
                vezes += 1;
            }
        }
    }
    for(int l = 0; l < vezes; l++){
        cout << lista[l] << "\n";
    }
}
