#include <iostream>
#include <iomanip>
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
                matriz[i][j] = abs(i - j) + 1;
            }
        }

        for (int i = 0; i < numero; i++) {
            for (int j = 0; j < numero; j++) {
                if (j > 0)
                    cout << " ";
                cout << setw(3) << matriz[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
