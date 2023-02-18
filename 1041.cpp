#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n1, n2;
    cin >> n1 >> n2;
    if(n1 > 0 and n2 > 0){
        cout << "Q1" << endl;
    }
    if(n1 < 0 and n2 > 0){
        cout << "Q2" << endl;
    }
    if(n1 < 0 and n2 < 0){
        cout << "Q3" << endl;
    }
    if(n1 > 0 and n2 < 0){
        cout << "Q4" << endl;
    }
    if(n1 == 0 and n2 != 0){
        cout << "Eixo Y" << endl;
    }
    if(n1 != 0 and n2 == 0){
        cout << "Eixo X" << endl;
    }
    if(n1 == 0 and n2 == 0){
        cout << "Origem" << endl;
    }
    return 0;
}
