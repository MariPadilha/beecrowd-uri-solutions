#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int reclamacoes;
    while(cin >> reclamacoes){
        if(!reclamacoes)
            cout << "vai ter copa!\n";
        else
            cout << "vai ter duas!\n";
    }
    return 0;
}
