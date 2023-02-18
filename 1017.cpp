#include <iostream>
#include <iomanip>;
using namespace std;

int main(){
    double n1, n2;
    cin >> n1;
    cin >> n2;
    cout << fixed << setprecision(3);
    cout << n1*n2/12 << endl;
}
