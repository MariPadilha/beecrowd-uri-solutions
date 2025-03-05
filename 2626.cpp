#include <iostream>
#include <string>

using namespace std;

bool is_vencedor(string a, string b, string c){
    if(a == "tesoura" && b == "papel" && c == "papel")return true;
    if(a == "pedra" && b == "tesoura" && c == "tesoura")return true;
    if(a == "papel" && b == "pedra" && c == "pedra")return true;
    return false;
}

int main(){
    string dodo, leo, pepper;

    while(cin >> dodo >> leo >> pepper){
        if(is_vencedor(dodo, leo, pepper)){
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...\n";
        }else if(is_vencedor(leo, dodo, pepper)){
            cout << "Iron Maiden's gonna get you, no matter how far!\n";
        }else if(is_vencedor(pepper, leo, dodo)){
            cout << "Urano perdeu algo muito precioso...\n";
        }else{
            cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
        }
    }

    return 0;
}
