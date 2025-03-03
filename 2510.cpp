#include <iostream>
using namespace std;

int main(){
    int numero_casos;
    string vilao;
    cin >> numero_casos;
    for(int i = 0; i <numero_casos; i++){
        cin >> vilao;
        if(vilao == "Batmain")
            cout << "N\n";
        else
            cout << "Y\n";
    }
    return 0;        
}
