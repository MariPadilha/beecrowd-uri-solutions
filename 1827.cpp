#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int matriz[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                matriz[i][j] = 0;
            }
        }
        int inicio = n / 3;
        int fim = n - inicio;

        for(int i = 0; i < n; i++){
            matriz[i][i] = 2;             
            matriz[i][n - i - 1] = 3;    
        }

        for(int i = inicio; i < fim; i++){
            for(int j = inicio; j < fim; j++){
                matriz[i][j] = 1;
            }
        }
        matriz[n / 2][n / 2] = 4;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << matriz[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
