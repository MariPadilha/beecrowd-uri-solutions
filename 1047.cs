using System;
class URI {
    static void Main(string[] args) { 
        String [] x = Console.ReadLine().Split(' ');
        int h0, m0, hf, mf, horatotal, minutototal;
        h0 = int.Parse(x[0]);
        m0 = int.Parse(x[1]);
        hf = int.Parse(x[2]);
        mf = int.Parse(x[3]);
        horatotal= hf - h0;
        minutototal = mf - m0;
        if(minutototal < 0){
            minutototal+= 60;
            horatotal -= 1;
        }
        if(horatotal < 0){
            horatotal += 24;
        }
        else if(h0 == hf && hf == mf && mf == m0){
            horatotal = 24;
            minutototal = 0;
        }
        Console.WriteLine($"O JOGO DUROU {horatotal} HORA(S) E {minutototal} MINUTO(S)");
    }
}
