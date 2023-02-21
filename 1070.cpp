#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int b, vezes;
cin >> b;
vezes = 0;
while(vezes != 6){
    if(b % 2 != 0){
        cout << b << "\n";
        vezes += 1;
    }
    b += 1;
}
    return 0;
}
