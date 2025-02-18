#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int numero_casos;
    double menor, maior, multiplicador, nota_final, nota;
    cin >> numero_casos;
    string nome;
    for(int i = 0; i < numero_casos; i++){
        nota_final = 0;
        menor = 100;
        maior = 0;
        cin >> nome;
        cin >> multiplicador;
        for(int i = 0; i < 7; i++){
            cin >> nota;
            nota_final+=nota;
            if(nota <= menor)
                menor = nota;
            if(nota >= maior)
                maior = nota;
        }
        nota_final-=menor;
        nota_final-=maior;
        cout << fixed << setprecision(2);
        cout << nome << " " << nota_final*multiplicador << endl;
    }
    return 0;
}
