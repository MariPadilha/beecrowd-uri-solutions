#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int x, y;
    cin >> x;
    cin >> y;
    int maior = (x > y) ? x : y;
    int menor = (y < x) ? y : x;
    menor += 1;
    int soma = 0;
    while(menor < maior){
        if(menor % 2 != 0){
            soma += menor;
        }
        menor += 1;
    }
    cout << soma << "\n";
}
