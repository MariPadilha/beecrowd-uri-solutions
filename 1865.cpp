#include <iostream>
using namespace std;
int main(){
    int numero_casos, forca;
    string pessoa;
    cin >> numero_casos;
    for(int i = 0; i < numero_casos; i++){
        cin >> pessoa;
        cin >> forca;
        if(pessoa == "Thor")
            cout << "Y\n";
        else
            cout << "N\n";
    }
    return 0;
}
