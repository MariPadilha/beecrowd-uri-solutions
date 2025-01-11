#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int numero_casos, contador = 0;
    cin >> numero_casos;
    string sheldon, raj;
    for(int i = 0; i < numero_casos; i++){
        cin >> sheldon >> raj;
        if(sheldon == raj){
            contador += 1;
            cout << "Caso #" << contador << ": De novo!\n";
        }else if(sheldon == "tesoura" && raj == "papel" || sheldon == "papel" && raj == "pedra" || sheldon == "pedra" && raj == "lagarto" || sheldon == "lagarto" && raj == "Spock" || sheldon == "Spock" && raj == "tesoura" || sheldon == "tesoura" && raj == "lagarto" || sheldon == "lagarto" && raj == "papel" || sheldon == "papel" && raj == "Spock" || sheldon == "Spock" && raj == "pedra" || sheldon == "pedra" && raj == "tesoura"){
            contador += 1;
            cout << "Caso #" << contador << ": Bazinga!\n";
        }else{
            contador += 1;
            cout << "Caso #" << contador << ": Raj trapaceou!\n";
        }
    }
    return 0;
}
