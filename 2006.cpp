#include <iostream>
using namespace std;
int main(){
    int cha_certo, chas[5], acertos=0;
    cin >> cha_certo;
    for(int i = 0; i < 5; i++){
        cin >> chas[i];
        if(chas[i]==cha_certo)
            acertos++;
    } 
    cout << acertos << endl;
    return 0;
}
