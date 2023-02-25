#include <iostream>
using namespace std;
int main(){
    int maior = 0;
    int no = 0;
    int lista [100], n;
    for(int i = 0; i < 100; i++){
        cin >> n;
        lista[i] = n;
    }
    for(int i = 0; i < 100; i++){
        if(lista[i] > maior){
            maior = lista[i];
            no = i+1;
    }
    }
    cout << maior << "\n";
    cout << no << endl;
}
