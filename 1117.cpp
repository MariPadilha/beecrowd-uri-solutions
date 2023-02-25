#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int vezes, inva;
    double media;
    vezes = inva = media = 0;
    while(true){
        double N;
        cin >> N;
        if(vezes == 2){
            break;
        }
        if(N >= 0 and N <= 10){
            vezes += 1;
            media += N;
        }
        else{
            inva += 1;
        }
    }
    for(int i = 0; i < inva; i++){
        cout << "nota invalida" << "\n";
    }
    media = media / 2;
    cout << fixed << setprecision(2);
    cout << "media = " << media << endl;
}
