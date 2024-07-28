#include <stdio.h>
int main(void) {
    int h0, hf, horatotal;
    scanf("%d %d", &h0, &hf);
    horatotal = hf - h0;
    if(horatotal < 0)
        horatotal += 24;
    else if(h0 == hf)
        horatotal = 24;
    printf("O JOGO DUROU %d HORA(S)\n", horatotal);
}
