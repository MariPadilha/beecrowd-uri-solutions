#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int o;
    cin >> o;
    for(int l = 0; l < o; l++){
        int n;
        cin >> n;
        int primo = 0;
        for(int i = 1; i < n+1; i++){
            if(n % i == 0){
                primo+=1;
            }
        }
        if(primo == 2 and 1 != n){
            cout << n << " eh primo" << "\n";
        }
        else{
            cout << n << " nao eh primo" << "\n";
        }
    }
}
