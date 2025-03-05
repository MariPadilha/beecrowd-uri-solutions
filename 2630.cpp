#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int r, g, b, numero_casos;
    string conversao;
    cin >> numero_casos;
    
    for(int i = 0; i < numero_casos; i++){
        cin >> conversao >> r >> g >> b;
        
        int valores[] = {r, g, b};
        
        if(conversao == "min")
            cout << "Caso #" << i+1 << ": " << *min_element(valores, valores + 3) << endl;
        else if(conversao == "max")
            cout << "Caso #" << i+1 << ": " << *max_element(valores, valores + 3) << endl;
        else if(conversao == "mean")
            cout << "Caso #" << i+1 << ": " << (r + g + b) / 3 << endl;
        else
            cout << "Caso #" << i+1 << ": " << (int)(0.30*r + 0.59*g + 0.11*b) << endl;
    }
    
    return 0;
}
