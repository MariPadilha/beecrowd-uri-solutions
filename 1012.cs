using System;
class URI {
    static void Main(string[] args) { 
        String[] l = Console.ReadLine().Split(' ');
        Console.WriteLine($"TRIANGULO: {double.Parse(l[0]) * double.Parse(l[2])/2.0:F3}\nCIRCULO: {3.14159 * (double.Parse(l[2])* double.Parse(l[2])):F3}\nTRAPEZIO: {double.Parse(l[2]) *(double.Parse(l[0]) + double.Parse(l[1])) / 2.0:F3}\nQUADRADO: {double.Parse(l[1]) * double.Parse(l[1]):F3}\nRETANGULO: {double.Parse(l[0]) * double.Parse(l[1]):F3}");
    }

}
