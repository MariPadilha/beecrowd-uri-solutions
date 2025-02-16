#include <iostream>
using namespace std;

int main() {
    int linha, coluna;
    cin >> linha >> coluna;
    int matriz[linha][coluna];
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < linha-2; i++){
        for(int j = 0; j < coluna-2; j++){
            if(matriz[i][j]==7){
                if(matriz[i+1][j]==7 && matriz[i+2][j]==7 && matriz[i][j+1]==7 && matriz[i][j+2]==7 && matriz[i+1][j+2]==7 && matriz[i+2][j+2]==7){
                    if(matriz[i+1][j+1] == 42){
                        cout << i+2 << " " << j+2 << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << 0 << " " << 0 << endl;
    return 0;
}
