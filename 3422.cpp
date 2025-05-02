#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main(){
    int partida, temp_total, n_casos, tempo;
    cin >> n_casos;
    for(int i = 0; i < n_casos; i++){
        scanf("%d %dT", &tempo, &partida);
        if(partida==1){
            if(tempo <= 45){
                cout << tempo << "\n";
            }else{
                cout << "45+" << tempo-45 << "\n";
            }
        }else{
            temp_total = 45+tempo;
            if(temp_total <= 90){
                cout << temp_total << "\n";
            }else{
                cout << "90+" << temp_total-90 << "\n";
            }
        }
    }
    return 0;
}
