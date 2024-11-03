#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int dia_inicio, dia_fim, dia;
    int hora_fim, hora_inicio, hora;
    int minuto_inicio, minuto_fim, minuto;
    int segundo_inicio, segundo_fim, segundo;
    int inicio, fim, tempo;
    char frase[50], h[3], m[3], s[3];

    fgets(frase, 50, stdin);
    sscanf(frase, "%*s %i", &dia_inicio);
    fgets(frase, 50, stdin);
    sscanf(frase, "%s : %s : %s", h, m, s);
    hora_inicio = atoi(h);
    minuto_inicio = atoi(m);
    segundo_inicio = atoi(s);
    fgets(frase, 50, stdin);
    sscanf(frase, "%*s %i", &dia_fim);
    fgets(frase, 50, stdin);
    sscanf(frase, "%s : %s : %s", h, m, s);
    hora_fim = atoi(h);
    minuto_fim = atoi(m);
    segundo_fim = atoi(s);

    inicio = (dia_inicio*24*60*60)+(hora_inicio*60*60)+(minuto_inicio*60)+segundo_inicio; 
    fim = (dia_fim*24*60*60)+(hora_fim*60*60)+(minuto_fim*60)+segundo_fim; 
    tempo = fim-inicio;

    dia = tempo / (24 * 60 * 60);
    tempo %= (24 * 60 * 60);
    hora = tempo / (60 * 60);
    tempo %= (60 * 60);
    minuto = tempo / 60;
    segundo = tempo % 60;

    printf("%i dia(s)\n%i hora(s)\n%i minuto(s)\n%i segundo(s)\n", dia, hora, minuto, segundo);
}
