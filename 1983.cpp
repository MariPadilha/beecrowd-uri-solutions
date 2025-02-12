#include <iostream>
using namespace std;
int main(){
    int numero_casos, matricula, matricula_maior;
    float nota, maior;
    cin >> numero_casos;
    for(int i = 0; i < numero_casos; i++){
        cin >> matricula;
        cin >> nota;
        if(nota >= maior){
            matricula_maior = matricula;
            maior = nota;
        }
    }
    if(maior>=8)
        cout << matricula_maior << endl;
    else 
        cout << "Minimum note not reached\n";
    return 0;
}
