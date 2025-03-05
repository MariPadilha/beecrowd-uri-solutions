#include <iostream>
using namespace std;

int main(){
    int linha, coluna, pao;
    while(cin >> linha){
        cin >> coluna;
        int matriz[linha][coluna];

        for(int i = 0; i < linha; i++){
            for(int j = 0; j < coluna; j++){
                cin >> matriz[i][j];
            }
        }

        for(int i = 0; i < linha; i++){
            for(int j = 0; j < coluna; j++){
                pao = 0;
                if(matriz[i][j]==1){
                    cout << 9;
                }else{
                    if(i<(linha-1) && matriz[i+1][j]==1)
                        pao++;
                    if(i > 0 && matriz[i-1][j]==1)
                        pao++;
                    if(j<(coluna-1) && matriz[i][j+1]==1)
                        pao++;
                    if(j > 0 && matriz[i][j-1]==1)
                        pao++;
                    cout << pao;
                }
            }
            cout << endl;
        }
    }
    return 0;        
}
