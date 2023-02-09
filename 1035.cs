using System;
using System.Globalization;
class URI {
    static void Main(string[] args) { 
        String [] n = Console.ReadLine().Split(' ');
        int A, B, C, D;
        A = int.Parse(n[0]); B = int.Parse(n[1]); C = int.Parse(n[2]); D = int.Parse(n[3]); 
        if(B>C && D>A && C+D > A+B && C > 0 && D > 0 && A % 2 == 0){
            Console.WriteLine("Valores aceitos");
        }
        else{
            Console.WriteLine("Valores nao aceitos");
        }
    }
}
