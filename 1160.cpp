#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int A, B, anos;
        double perA, perB;
        cin >> A >> B >> perA >> perB;
        anos = 0;
        while(true){
            A += A*perA/100;
            B += B*perB/100;
            anos += 1;
            if(anos > 100){
                cout << "Mais de 1 seculo." << endl;
                break;
            }
            if(A > B){
                cout << anos << " anos." << "\n";
                break;
            }
        }
    }
}
