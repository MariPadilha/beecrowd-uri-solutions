#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3,n4;
    cin >> n1 >> n2 >> n3 >> n4;
    if(n1 < n2 + n3 && n2 < n1 + n3 && n3 < n1 + n2){
        cout << "S\n";
    }else if(n1 < n2 + n4 && n2 < n1 + n4 && n4 < n1 + n2){
        cout << "S\n";
    }else if(n1 < n3 + n4 && n3 < n1 + n4 && n4 < n1 + n3){
        cout << "S\n";
    }else if(n2 < n3 + n4 && n3 < n2 + n4 && n4 < n2 + n3){
        cout << "S\n";
    }else{
        cout << "N\n";
    }
    return 0;
}
