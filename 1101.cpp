#include <iostream>
using namespace std;
int main(){
    int a = 0, soma = 0;
    int total [1000][2];
    int pri = 0, seg = 0;
    while(true){
        cin >> pri >> seg;
        if(pri <= 0 || seg <= 0){
            break;
        }
        for(int l = a; l < a+1; l++){
            for(int c = 0; c < 2; c++){
                total[l][c] = (c == 0) ? pri : seg; 
            }
        }
        a++;
    }
    for(int i = 0; i < a; i++){
        if(total[i][0]<total[i][1]){
            for(int k = total[i][0]; k < total[i][1]+1; k++){
                cout << k << " ";
                soma+=k;
            }
        }
        if(total[i][1]<total[i][0]){
            for(int p = total[i][1]; p < total[i][0]+1; p++){
                cout << p << " ";
                soma+=p;
            }
        }
        cout << "Sum=" << soma << endl;
        soma = 0;
    }
}
