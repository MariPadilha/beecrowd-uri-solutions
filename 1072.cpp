#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n, dentro, fora, l;
    cin >> n;
    dentro = fora = 0;
    for(int i = 0; i < n; i++){
        cin >> l;
        if(l >= 10 and l <= 20){
            dentro += 1;
        }
        else{
            fora += 1;
        }
    }
    cout << dentro << " in\n" << fora << " out" << endl;
}
