#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool atingiu(int raio, int retangulo_x, int retangulo_y, int largura, int altura, int foco_x, int foco_y) {
    if(sqrt(pow(retangulo_x - foco_x, 2) + pow(retangulo_y - foco_y, 2)) <= raio) return true;
    if(sqrt(pow(retangulo_x + largura - foco_x, 2) + pow(retangulo_y - foco_y, 2)) <= raio) return true;
    if(sqrt(pow(retangulo_x - foco_x, 2) + pow(retangulo_y + altura - foco_y, 2)) <= raio) return true;
    if(sqrt(pow(retangulo_x + largura - foco_x, 2) + pow(retangulo_y + altura - foco_y, 2)) <= raio) return true;

    int dx = max(retangulo_x - foco_x, foco_x - (retangulo_x + largura));
    if(dx < 0)dx=0;
    int dy = max(retangulo_y - foco_y, foco_y - (retangulo_y + altura));
    if(dy < 0)dy=0;

    return (dx * dx + dy * dy) <= (raio * raio);
}

int main() {
    int numero_casos, largura, altura, retangulo_x, retangulo_y, foco_x, foco_y, nivel, raio;
    string poder;
    cin >> numero_casos;

    for (int i = 0; i < numero_casos; i++) {
        cin >> largura >> altura >> retangulo_x >> retangulo_y;
        cin >> poder >> nivel >> foco_x >> foco_y;

        if(poder == "fire"){
            if(nivel == 1)raio=20;
            else if(nivel == 2)raio=30;
            else raio=50;

        }else if(poder == "water"){
            if(nivel == 1)raio=10;
            else if(nivel == 2)raio=25;
            else raio=40;

        }else if(poder == "earth"){
            if(nivel == 1)raio=25;
            else if(nivel == 2)raio=55;
            else raio=70;

        }else{
            if(nivel == 1)raio=18;
            else if(nivel == 2)raio=38;
            else raio=60;
        }

        if(atingiu(raio, retangulo_x, retangulo_y, largura, altura, foco_x, foco_y)){
            if (poder == "fire") cout << "200\n";
            else if (poder == "water") cout << "300\n";
            else if (poder == "earth") cout << "400\n";
            else cout << "100\n";
        }else{
            cout << "0\n";
        }
    }

    return 0;
}
