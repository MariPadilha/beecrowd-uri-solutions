#include <iostream>
#include <string>
using namespace std;
int main(){
    string frase;
    getline(cin, frase);
    if(frase.size()>140)
        cout << "MUTE\n";
    else
        cout << "TWEET\n";
    return 0;
}
