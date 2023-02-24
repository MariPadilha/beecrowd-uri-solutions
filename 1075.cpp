#include <iostream>
using namespace std;

int main(){
    int a, vezes, lista[10000];
    cin >> a;
    vezes = 0;
    for(int i = 1; i < 10001; i++){
        if(i % a == 2){
            lista[vezes] = i;
            vezes += 1;
        }
    }
    for(int j = 0; j < vezes; j++){
        cout << lista[j] << "\n";
    }
}
