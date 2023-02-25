#include <iostream>
using namespace std;
int main(){
while(true){
    int n;
    cin >> n;
    if(n != 2002){
        cout << "Senha Invalida" << "\n";
    }
    if(n == 2002){
        break;
    }
}
cout << "Acesso Permitido" << "\n";
}
