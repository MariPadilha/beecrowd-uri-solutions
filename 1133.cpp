#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int x, y;
    cin >> x;
    cin >> y;
    if(x < y){
        for(int i = x+1; i < y; i++){
            if(i % 5 == 2 or i % 5 == 3){
                cout << i << endl;
            }
        }
    }
    if(x > y){
        for(int i = y+1; i < x; i++){
            if(i % 5 == 2 or i % 5 == 3){
                cout << i << endl;
            }
        }
    }
}
