#include <iostream>
using namespace std;

int main(){
    int numero_quadras, cameras;
    cin >> numero_quadras;
    int matriz[numero_quadras+1][numero_quadras+1];
    for(int i = 0; i < numero_quadras+1; i++){
        for(int j = 0; j < numero_quadras+1; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < numero_quadras; i++){
        for(int j = 0; j < numero_quadras; j++){
            cameras = 0;
            cameras+=matriz[i][j]+matriz[i+1][j]+matriz[i][j+1]+matriz[i+1][j+1];
            if(cameras>=2){
                cout << "S";
            }else
                cout << "U";
        }
        cout << endl;
    }
    return 0;
}
