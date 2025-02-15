#include <iostream>
using namespace std;
int main(){
    int meses[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    int mes, dia, soma;
    while(cin >> mes){
        cin >> dia;
        soma = 0;
        if(mes == 12){
            if(dia > 25)
                cout << "Ja passou!\n";
            else{
                if(dia == 25)
                    cout << "E natal!\n";
                else
                    cout << "E vespera de natal!\n";
            }
        }
        else{
            for(int i = mes; i<11; i++)
                soma += meses[i];
            cout << "Faltam " << soma+25+(meses[mes-1]-dia) << " dias para o natal!\n";
        }
    }
}
