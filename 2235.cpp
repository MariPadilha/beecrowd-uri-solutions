#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >>a>>b>>c;
    if(a == b || b == c || c == a || a+b == c || c+a == b || c+b == a)
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}
