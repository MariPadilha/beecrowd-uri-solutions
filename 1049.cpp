#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string ossos, animal, alimento;
    cin >> ossos;
    cin >> animal;
    cin >> alimento;
    if(ossos == "vertebrado"){
        if(animal == "ave"){
            if(alimento == "carnivoro"){
                cout << "aguia" << "\n";
            }
            else if(alimento == "onivoro"){
                cout << "pomba" << "\n";
            }
        }
        else if(animal == "mamifero"){
            if(alimento == "onivoro"){
                cout << "homem" << "\n";
            }
            else if(alimento == "herbivoro"){
                cout << "vaca" << "\n";
            }
        }
    }
    else if(ossos == "invertebrado"){
        if(animal == "inseto"){
            if(alimento == "hematofago"){
                cout << "pulga" << "\n";
            }
            else if(alimento == "herbivoro"){
                cout << "lagarta" << "\n";
            }
        }
        else if(animal == "anelideo"){
            if(alimento == "hematofago"){
                cout << "sanguessuga" << "\n";
            }
            else if(alimento == "onivoro"){
                cout << "minhoca" << "\n";
            }
        }
    }
    return 0;
}
