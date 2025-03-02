#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

struct Operacao{
    int operador;
    int operando;
    int resultado;
    bool soma(){
        if(operador+operando==resultado)
            return true;
        return false;
    }
    bool subtracao(){
        if(operador-operando==resultado)
            return true;
        return false;
    }
    bool multiplicacao(){
        if(operador*operando==resultado)
            return true;
        return false;
    }
    bool impossivel(){
        if(!soma()&&!subtracao()&&!multiplicacao())
            return true;
        return false;
    }

};

int main(){
    vector <string> perdedores;
    int numero_casos, indice_operacoes;
    string nome;
    char opcao;
    while(cin >> numero_casos){
        perdedores.clear();
        struct Operacao operacoes[numero_casos];
        for(int i = 0; i < numero_casos; i++){
            scanf("%d %d=%d", &(operacoes[i].operador), &(operacoes[i].operando), &(operacoes[i].resultado));
        }
        for(int i = 0; i < numero_casos; i++){
            cin >> nome >> indice_operacoes >> opcao;
            indice_operacoes--;
            if(opcao == '+'){
                if(!(operacoes[indice_operacoes].soma()))
                    perdedores.push_back(nome);
            }else if(opcao == '-'){
                if(!(operacoes[indice_operacoes].subtracao()))
                    perdedores.push_back(nome);
            }else if(opcao == '*'){
                if(!(operacoes[indice_operacoes].multiplicacao()))
                    perdedores.push_back(nome);
            }else{
                if(!(operacoes[indice_operacoes].impossivel()))
                    perdedores.push_back(nome);
            }
        }
        if(perdedores.empty())
            cout << "You Shall All Pass!\n";
        else if(perdedores.size()==numero_casos)
            cout << "None Shall Pass!\n";
        else{
            sort(perdedores.begin(), perdedores.end());
            for(int i = 0; i < perdedores.size()-1; i++){
                cout << perdedores[i] << " ";
            }
            cout << perdedores[perdedores.size()-1] << endl;
        }
    }
    return 0;        
}
