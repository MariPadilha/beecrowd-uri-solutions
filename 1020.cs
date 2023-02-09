using System;
class URI {
    static void Main(string[] args) { 
        int n1 = int.Parse(Console.ReadLine());
        int ano = n1 / 365;
        n1 = n1 - ano * 365;
        int mes = n1 / 30;
        n1 = (n1 - mes * 30);
        Console.WriteLine($"{ano} ano(s)\n{mes} mes(es)\n{n1} dia(s)");
    }
}
