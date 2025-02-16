#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int numero_casos, golpe1 = 0,golpe2 = 0, bonus,a,b,c,d,e,f;
    cin >> numero_casos;
    for(int i = 0; i<numero_casos; i++){
        cin >> bonus;
        cin >> a >> b >> c >> d >> e >> f;
        if(c % 2 == 0)
            golpe1 = ((a + b) / 2) + bonus;
        else
            golpe1 = ((a + b) / 2);
        if(f % 2 == 0)
            golpe2 = ((d + e) / 2) + bonus;
        else
            golpe2 = ((d + e) / 2);
        if(golpe1 > golpe2)
            cout << "Dabriel\n";
        if(golpe1 < golpe2)
            cout << "Guarte\n";
        if(golpe1 == golpe2)
            cout << "Empate\n";
    }
    return 0;
}
