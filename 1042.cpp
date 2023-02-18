#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a, b, c, d, e, f;
    cin >> a >> b >> c;
    if(a > b and a > c){
        d = a;
        if(b > c){
            e = b;
            f = c;
        }
        else{
            e = c;
            f = b;
        }
    }
    if(b > a and b > c){
        d = b;
        if(a > c){
            e = a;
            f = c;
        }
        else{
            e = c;
            f = a;
        }
    }
    if(c > a and c > b){
        d = c;
        if(a > b){
            e = a;
            f = b;
        }
        else{
            f = a;
            e = b;
        }
    }
    cout << f << "\n";
    cout << e << "\n";
    cout << d << "\n";
    cout << "\n";  
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    return 0;
}
