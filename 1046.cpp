#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int h0, hf, horatotal;
    cin >> h0 >> hf;
    horatotal = hf - h0;
    if(horatotal < 0){
        horatotal += 24;
    }
    else if(h0 == hf){
        horatotal = 24;
    }
    cout << "O JOGO DUROU "<< horatotal << " HORA(S)" << endl;
    return 0;
}
