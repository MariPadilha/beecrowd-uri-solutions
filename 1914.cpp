#include <iostream>
using namespace std;
int main(){
    int numero_casos, n1, n2;
    string pessoa1, pessoa2, impar, par, opcao;
    cin >> numero_casos;
    for(int i = 0; i < numero_casos; i++){
        cin >> pessoa1;
        cin >> opcao;
        cin >> pessoa2;
        if(opcao == "PAR"){
            par = pessoa1;
            impar = pessoa2;
        }else{
            par = pessoa2;
            impar = pessoa1;
        }
        cin >> opcao;
        cin >> n1;
        cin >> n2;
        n1+=n2;
        if(n1%2==0)
            cout << par << endl;
        else
            cout << impar << endl;
    }
    return 0;
}
