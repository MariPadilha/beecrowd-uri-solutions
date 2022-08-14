#include <stdio.h>
int main(){
    int h0, m0, hf, mf, horatotal, minutototal;
    scanf("%d %d %d %d",&h0, &m0, &hf, &mf);
    horatotal = hf - h0;
    minutototal = mf - m0;
    if(horatotal==0 && minutototal == 0){
        horatotal = 24;
    }
    if(mf<m0 && h0>hf){
        minutototal = 60 - (m0 - mf);
        horatotal = 24 + horatotal - 1;
    }
    else if(mf<m0 && h0<hf){
        minutototal = 60 - (m0 - mf);
        horatotal = horatotal - 1;
    }
    else if(mf<m0 && horatotal == 0) {
        minutototal = 60 - (m0 - mf);
        horatotal = 23;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horatotal, minutototal);

}
