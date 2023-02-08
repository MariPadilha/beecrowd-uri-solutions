using System;
class URI {
    static void Main(string[] args) { 
        String[] n1 = Console.ReadLine().Split(' ');
        String[] n2 = Console.ReadLine().Split(' ');
        double r = Math.Sqrt(Math.Pow((double.Parse(n2[0]) - double.Parse(n1[0])), 2) + Math.Pow((double.Parse(n2[1]) - double.Parse(n1[1])),2));
        Console.WriteLine($"{r:F4}");
    }

}
