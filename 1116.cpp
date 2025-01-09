#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int numero_casos, dividendo, divisor;
    float resultado;
    cin >> numero_casos;
    for(int i = 0;i < numero_casos; i++){
        cin >> dividendo >> divisor;
        if(divisor == 0){
            cout << "divisao impossivel\n";
        }else{
            if(dividendo==0){
                cout << "0.0\n";
            }else{
                resultado = (float)dividendo/(float)divisor;   
                cout << fixed << setprecision(1);
                cout << resultado << endl;
            }
        }
    }
    return 0;
}
