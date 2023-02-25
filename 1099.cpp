#include <iostream>
using namespace std;
int main(){
    int x, y, n;
    cin >> n;
    int lista[n];
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        int maior = x > y ? x : y;
        int menor = y < x ? y : x;
        menor += 1;
        int soma = 0;
        while(menor < maior){
            if(menor % 2 != 0){
                soma += menor;
            }
            menor += 1;
        }
        lista[i] = soma;
    }
    for(int k = 0; k < n; k++){
        cout << lista[k] << "\n";
    }
}
