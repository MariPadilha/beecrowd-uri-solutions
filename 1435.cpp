#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int numero;
    while (true) {
        cin >> numero;
        if (!numero)
            break;

        int matriz[numero][numero];

        for (int i = 0; i < numero; i++) {
            for (int j = 0; j < numero; j++) {
                matriz[i][j] = 1 + min(min(i, j), min(numero - i - 1, numero - j - 1));
            }
        }

        for (int i = 0; i < numero; i++) {
            for (int j = 0; j < numero; j++) {
                cout << setw(3) << matriz[i][j];
                if (j < numero - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
