using System;
class URI {
    static void Main(string[] args) { 
        String [] x = Console.ReadLine().Split(' ');
        int h0, hf, horatotal;
        h0 = int.Parse(x[0]);
        hf = int.Parse(x[1]);
        horatotal = hf - h0;
        if(horatotal < 0){
            horatotal += 24;
        }
        else if(h0 == hf){
            horatotal = 24;
        }
        Console.WriteLine($"O JOGO DUROU {horatotal} HORA(S)");
    }
}
