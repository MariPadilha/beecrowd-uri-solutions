using System;
class URI {
    static void Main(string[] args) { 
        int distancia = int.Parse(Console.ReadLine());
        float combustivel = float.Parse(Console.ReadLine());
        Console.WriteLine($"{distancia/combustivel:F3} km/l");
    }

}
