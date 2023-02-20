#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int di, df, mi, si, hi, hf, mf, sf, dias, horas, minutos, segundos;
    string d;
    cin >> d >> di;
    cin >> hi >> d >> mi >> d >> si; 
    cin >> d >> df;
    cin >> hf >> d >> mf >> d >> sf;

    int minuto_seg = 60;
    int hora_seg = minuto_seg * 60;
    int dia_seg = hora_seg * 24;
    int i = si + mi*minuto_seg + hi*hora_seg + di*dia_seg;
    int f = sf + mf*minuto_seg + hf*hora_seg + df*dia_seg;
    if(i < f){
        int tempo = f - i;
        dias = tempo/dia_seg;
        tempo = tempo%dia_seg;
        horas = tempo/hora_seg;
        tempo = tempo%hora_seg;
        minutos = tempo/minuto_seg;
        tempo = tempo%minuto_seg;
        segundos = tempo;
    }
    int W = dias;
    int X = horas;
    int Y = minutos;
    int Z = segundos;

    cout << W << " dia(s)\n" << X << " hora(s)\n" << Y << " minuto(s)\n" << Z << " segundo(s)\n";
    return 0;
}
