#include <iostream>
using namespace std;
int main(){
    int n1, n2;
    cin >> n1;
    n2 = n1;
    while(n1 != 1){
        n1 -= 1;
        n2 += n2 * (n1-1);
    }
    cout << n2 << "\n";
}
