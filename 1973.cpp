#include <iostream>
#include <vector>
using namespace std;
int main(){
    int i=0;
    long long numero_estrelas, estrelas_atacadas=0, maior = 0, carneiros_nao_roubados=0;
    cin >> numero_estrelas;
    vector<long long> estrelas(numero_estrelas);
    vector<bool> atacadas(numero_estrelas, false);
    bool is_impar;

    for(int i = 0; i < numero_estrelas; i++){
        cin >> estrelas[i];
        carneiros_nao_roubados+=estrelas[i];
    }

    while(true){
        ((estrelas[i])% 2 == 0) ? is_impar = false : is_impar = true;
        if(!atacadas[i]){
            estrelas_atacadas++;
            atacadas[i] = true;
        }
        if(estrelas[i]>=1){
            estrelas[i]--;
            carneiros_nao_roubados--;
        }

        (!is_impar) ? i-- : i++;

        if(i<0 || i>=numero_estrelas){
            break;
        }
    }
    cout << estrelas_atacadas << " " << carneiros_nao_roubados << endl;
    return 0;
}
