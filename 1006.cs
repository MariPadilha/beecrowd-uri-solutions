using System;
class URI {
    static void Main(string[] args) { 
        double nota1 = double.Parse(Console.ReadLine()); double nota2 = double.Parse(Console.ReadLine()); double nota3 = double.Parse(Console.ReadLine());
        double soma = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;
        Console.WriteLine($"MEDIA = {soma:F1}");
    }

}
