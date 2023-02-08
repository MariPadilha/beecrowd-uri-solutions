using System;
class URI {
    static void Main(string[] args) { 
        string nome = Console.ReadLine();
        double salfixo = double.Parse(Console.ReadLine());
        double qtdevendas = double.Parse(Console.ReadLine()); 
        double total = salfixo + (qtdevendas * (15.0/100.0));
        Console.WriteLine($"TOTAL = R$ {total:F2}");

    }

}
