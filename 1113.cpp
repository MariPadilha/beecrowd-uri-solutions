#include <iostream>
using namespace std;
int main(){
    while(true){
        int a, b;
        cin >> a >> b;
        if(a == b){
            break;
        }
        a > b ? cout << "Decrescente\n" : cout << "Crescente\n";
    }
}
