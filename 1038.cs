using System;
using System.Globalization;
class URI {
    static void Main(string[] args) { 
        String [] x = Console.ReadLine().Split(' ');
        double a;
        int b = int.Parse(x[1]);
        a = 0;
        if(x[0] == "1"){
            a = 4.0;
        }
        if(x[0] == "2"){
            a = 4.5;
        }
        if(x[0] == "3"){
            a = 5.0;
        }
        if(x[0] == "4"){
            a = 2.0;
        }
        if(x[0] == "5"){
            a = 1.5;
        }
        Console.WriteLine($"Total: R$ {a*b:F2}");
    }
}
