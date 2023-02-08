using System;
class URI {
    static void Main(string[] args) { 
        int numfunc = int.Parse(Console.ReadLine());
        int hrtrab = int.Parse(Console.ReadLine()); 
        float valorhr = float.Parse(Console.ReadLine());
        float salario = hrtrab * valorhr;
        Console.WriteLine($"NUMBER = {numfunc}");
        Console.WriteLine($"SALARY = U$ {salario:F2}");

    }

}
