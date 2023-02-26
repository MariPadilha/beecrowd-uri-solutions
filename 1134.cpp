#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int alcool, gasolina, diesel;
    alcool = gasolina = diesel = 0;
    while(true){
        int n;
        cin >> n;
        if(n == 4){
            break;
        }
        if(n == 3){
            diesel += 1;
        }
        if(n == 2){
            gasolina += 1;
        }
        if(n == 1){
            alcool += 1;
        }
    }
    cout << "MUITO OBRIGADO\nAlcool: " << alcool << "\nGasolina: " << gasolina << "\nDiesel: " << diesel << endl;
}
