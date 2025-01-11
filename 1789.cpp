#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int numero_lesmas, max;
    while(cin >> numero_lesmas){
        int lesmas[numero_lesmas];
        for(int i = 0; i < numero_lesmas; i++){
            cin >> lesmas[i];
        }
        max = *max_element(lesmas, lesmas+numero_lesmas);
        if(max<10)
            cout << "1\n";
        else if(max>=20)
            cout << "3\n";
        else
            cout << "2\n";
    }
    return 0;
}
