#include <iostream>
using namespace std;

int main(){
    int N, o, w, vezes;
    cin >> N;
    string lista[N];
    for(int i = 0; i < N; i++){
        cin >> o;
        if(o < 0){
            if(o % 2 != 0){
                lista[vezes] = "ODD NEGATIVE";
            }
            if(o % 2 == 0){
                lista[vezes] = "EVEN NEGATIVE";
            }
        }
        if(o == 0){
            lista[vezes] = "NULL";
        }
        if(o > 0){
            if(o % 2 != 0){
                lista[vezes] = "ODD POSITIVE";
            }
            if(o % 2 == 0){
                lista[vezes] = "EVEN POSITIVE";
            }
        }
        vezes++;
    }
    for(w = 0; w < N; w++){
        cout << lista[w] << "\n";
    }
}
