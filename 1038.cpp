#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a,b;
    string x;
    cin >> x >> b;
    if(x == "1"){
        a = 4.0;
    }
    if(x == "2"){
        a = 4.5;
    }
    if(x == "3"){
        a = 5.0;
    }
    if(x == "4"){
        a = 2.0;
    }
    if(x == "5"){
        a = 1.5;
    }
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << a*b << endl;
}
