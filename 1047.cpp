#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int h0, m0, hf, mf, horatotal, minutototal;
    cin >> h0 >> m0 >> hf >> mf;
    horatotal= hf - h0;
    minutototal = mf - m0;
    if(minutototal < 0){
        minutototal+= 60;
        horatotal -= 1;
    }
    if(horatotal < 0){
        horatotal += 24;
    }
    else if(h0 == hf and hf == mf and mf == m0){
        horatotal = 24;
        minutototal = 0;
    }
    cout << "O JOGO DUROU " << horatotal << " HORA(S) E " << minutototal << " MINUTO(S)" << endl;
    return 0;
}
