#include <iostream>
#include <iomanip>
# include <cmath>
using namespace std;
int main(){
    int n1;
    cin >> n1;
    int lista[n1];
    for(int i = 0; i < n1; i++){
        int a, b;
        cin >> a >> b;
        int c = a + b;
        lista[i] = c;
    }
    for(int j = 0; j < n1; j++){
        cout << lista[j] << "\n";
    }
}
