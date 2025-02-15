#include <iostream>
#include <string>
using namespace std;
int main(){
    string frase;
    getline(cin, frase);
    if(frase.size()<=80)
        cout << "YES\n";
    if(frase.size() > 80)
        cout << "NO\n";
    return 0;
}
