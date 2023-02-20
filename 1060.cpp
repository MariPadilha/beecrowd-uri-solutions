#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float n1, s;
    int n;
    s = 0;
    for(n = 1; n < 7; n++){
        cin >> n1;
        if(n1>0){
            s+=1;
        }
    }
    cout << s << " valores positivos" << endl;
    return 0;
}
