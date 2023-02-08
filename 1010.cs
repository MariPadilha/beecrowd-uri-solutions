using System;
class URI {
    static void Main(string[] args) { 
        String[] n1 = Console.ReadLine().Split(' ');
        String[] n2 = Console.ReadLine().Split(' ');
        float total = (int.Parse(n1[1]) * float.Parse(n1[2])) + (int.Parse(n2[1]) * float.Parse(n2[2]));
        Console.WriteLine($"VALOR A PAGAR: R$ {total:F2}");

    }

}
