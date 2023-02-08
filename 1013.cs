using System;
class URI {
    static void Main(string[] args) { 
        String[] l = Console.ReadLine().Split(' ');
        int maior = (int.Parse(l[0]) + int.Parse(l[1]) + Math.Abs(int.Parse(l[0]) - int.Parse(l[1]))) / 2;
        int resultado = (maior + int.Parse(l[2]) + Math.Abs(maior - int.Parse(l[2]))) / 2;
        Console.WriteLine($"{resultado} eh o maior");
    }

}
