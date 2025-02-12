#include <iostream>
#include <string>
using namespace std;

int numero=0, tamanho_sequencia;
string sequencia = "";

int gera_sequencia(int n){
    if(n == numero){
        if(n == 0){
            sequencia+=to_string(n);
            tamanho_sequencia++;
            return 0;
        }else{
            for(int i = 0; i < n-1; i++){
                sequencia+=to_string(n);
                sequencia+=" ";
                tamanho_sequencia++;
            }
            sequencia+=to_string(n);
            tamanho_sequencia++;
            return 0;
        }
    }else{
        if(n == 0){
            sequencia+=to_string(n);
            sequencia+=" ";
            tamanho_sequencia++;
            return gera_sequencia(n+1);
        }else{
            for(int i = 0; i < n; i++){
                sequencia+=to_string(n);
                sequencia+=" ";
                tamanho_sequencia++;
            }
            return gera_sequencia(n+1);
        }
    }

}
int main(){
    int caso=0;
    while(cin >> numero){
        sequencia = "";
        tamanho_sequencia = 0;
        gera_sequencia(0);
        caso++;
        cout << "Caso " << caso << ": " << tamanho_sequencia;
        (tamanho_sequencia==1)?cout<<" numero\n":cout<<" numeros\n";
        cout << sequencia << endl << endl;
    }
    return 0;
}
