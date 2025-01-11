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
            matriz[i][0] = (i == 0) ? 1 : matriz[i - 1][0] * 2;
            for (int j = 1; j < numero; j++) {
                matriz[i][j] = matriz[i][j - 1] * 2;
            }
        }

        int maior = matriz[numero - 1][numero - 1];
        int largura = to_string(maior).size();

        for (int i = 0; i < numero; i++) {
            for (int j = 0; j < numero; j++) {
                cout << setw(largura) << matriz[i][j];
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
