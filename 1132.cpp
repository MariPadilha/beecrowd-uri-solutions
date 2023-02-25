#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a, b;
    cin >> a;
    cin >> b;
    int total = 0;
    int t = a < b ? a : b;
    int g = a > b ? a+1 : b+1;
    for(int i = t; i < g; i++){
        if(i%13!=0){
            total+=i;
        }
    }
    cout << total << endl;
}
