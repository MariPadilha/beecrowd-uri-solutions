using System;
class URI {
    static void Main(string[] args) { 
        int n1 = int.Parse(Console.ReadLine());
        int hora = n1 / 3600;
        n1 = n1 - hora*3600;
        int minutos = n1 / 60;
        if(minutos >= 60){
            n1 = (n1 - minutos*60);
        }
        else{
            n1 = (n1 - minutos * 60);
        }
        Console.WriteLine($"{hora}:{minutos}:{n1}");
    }

}
