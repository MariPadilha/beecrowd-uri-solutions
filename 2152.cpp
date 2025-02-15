#include <iostream>
#include <string>
using namespace std;
int main(){
    int numero_casos;
    string hora, min, porta;
    cin >> numero_casos;
    for(int i = 0; i<numero_casos; i++){
        cin >> hora >> min >> porta;
        if((hora.size()) == 1 || (min.size()) == 1){
            if((hora.size()) == 2)
                cout << hora << ":0" << min << " ";
            else if((min.size()) == 2)
                cout << "0" << hora << ":" << min << " ";
            else
                cout << "0" << hora << ":0" << min << " ";
        }
        else
            cout << hora << ":" << min << " ";
        if(porta == "1")
            cout << "- A porta abriu!\n";
        else
            cout << "- A porta fechou!\n";
    }
    return 0;
}
