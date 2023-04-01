#include <iostream>
using namespace std;
int main(){
    int par[15], impar[15];
    int aim = 0, apa = 0;
    for(int i = 0; i < 15; i++){
        int n;
        cin >> n;
        if(n % 2 != 0){
            impar[aim] = n;
            aim++;
            if(aim == 5){
                for(int m = 0; m < 5; m++){
                    cout << "impar[" << m << "] = " << impar[m] << endl;
                }
                aim = 0;
            }
        }
        else{
            par[apa] = n;
            apa++;
            if(apa == 5){
                for(int m = 0; m < 5l; m++){
                    cout << "par[" << m << "] = " << par[m] << endl;
                }
                apa = 0;
            }
        }
    }
    if(aim != 0){
        for(int i = 0; i < aim; i++){
            cout << "impar[" << i << "] = " << impar[i] << endl;
        }
    }
    if(apa != 0){
        for(int i = 0; i < apa; i++){
            cout << "par[" << i << "] = " << par[i] << endl;
        }
    }
}
