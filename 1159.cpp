#include <iostream>
using namespace std;
int main(){
    while(true){
        int n;
        cin >> n;
        int soma = 0;
        if(n == 0){
            break;
        }
        for(int i = n; i < n+10; i++){
            if(i % 2 == 0){
                soma+=i;
            }
        }
        cout << soma << endl;
    }
}
