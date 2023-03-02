#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = 0;
    int lista[n];
    int numeros[n];
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        numeros[i] = num;
        for(int j = 1; j < num; j++){
            if(num%j==0){
                a+=j;
            }
        }
        if(a == num){
            lista[i] = true;
        }
        else{
            lista[i] = false;
        }
        a = 0;
    }
    for(int l = 0; l < n; l++){
        lista[l] == true ? cout << numeros[l] << " eh perfeito" << "\n" : cout << numeros[l] << " nao eh perfeito" << "\n";
    }
}
