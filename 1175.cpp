#include <iostream>
using namespace std;
int main(){
    int vetor[20];
    for(int i = 0; i < 20; i++){
        cin >> vetor[19-i];
    }
    for(int i = 0; i<20; i++){
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }
    return 0;
}
