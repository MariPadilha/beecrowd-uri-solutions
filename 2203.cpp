#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x_Fiddlesticks, y_Fiddlesticks, x_invasor, y_invasor, velocidade_invasor, raio_conjuracao, raio_corvos;
    while(cin >> x_Fiddlesticks){
        cin >> y_Fiddlesticks >> x_invasor >> y_invasor >> velocidade_invasor >> raio_conjuracao >> raio_corvos;
        if(raio_conjuracao + raio_corvos >= sqrt(pow(x_invasor-x_Fiddlesticks,2)+pow(y_invasor-y_Fiddlesticks,2)) + 1.5*velocidade_invasor)
            cout << "Y\n";
        else
            cout << "N\n";
    }
    return 0;
}
