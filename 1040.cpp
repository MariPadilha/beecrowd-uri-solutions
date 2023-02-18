#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n1, n2, n3, n4, media, exame, nota;
    cin >> n1 >> n2 >> n3 >> n4;
    media = ((n1*2.0) + (n2*3.0) + (n3*4.0) + (n4*1.0))/10.0;
    if(media >= 7.0){
        cout << fixed << setprecision(1);
        cout << "Media: " << media << "\nAluno aprovado." << endl;
    }
    if(media < 5.0){
        cout << fixed << setprecision(1);
        cout << "Media: " << media << "\nAluno reprovado." << endl;
    }
    if(5.0 <= media and media <= 6.9){
        cin >> exame;
        cout << fixed << setprecision(1);
        cout << "Media: " << media << "\nAluno em exame." << "\nNota do exame: " << exame << endl;
        nota = (media+exame)/2.0;
        if(nota >= 5.0){
            cout << fixed << setprecision(1);
            cout << "Aluno aprovado.\nMedia final: " << nota << endl;
        }
        else{
            cout << fixed << setprecision(1);
            cout << "Aluno reprovado.\nMedia final: " << nota << endl;
        }
    }
    return 0;
}
