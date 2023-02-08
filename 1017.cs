using System;
class URI {
    static void Main(string[] args) { 
        float n1 = float.Parse(Console.ReadLine());
        float n2 = float.Parse(Console.ReadLine());
        Console.WriteLine($"{n1 * n2 / 12:F3}");
    }

}
