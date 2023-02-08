using System;
class URI {
    static void Main(string[] args) { 
        double raio = double.Parse(Console.ReadLine());
        double volume = (4.0 * 3.14159 * (raio* raio * raio)) / 3;
        Console.WriteLine($"VOLUME = {volume:F3}");
    }

}
