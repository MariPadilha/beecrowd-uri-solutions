using System;
class URI {
    static void Main(string[] args) { 
        String [] x = Console.ReadLine().Split(' ');
        int a, b, c, d, e, f;
        a = int.Parse(x[0]);
        b = int.Parse(x[1]);
        c = int.Parse(x[2]);
        d = 0; e = 0; f = 0; 
        if(a > b && a > c){
            d = a;
            if(b > c){
                e = b;
                f = c;
            }
            else{
                e = c;
                f = b;
            }
        }
        if(b > a && b > c){
            d = b;
            if(a > c){
                e = a;
                f = c;
            }
            else{
                e = c;
                f = a;
            }
        }
        if(c > a && c > b){
            d = c;
            if(a > b){
                e = a;
                f = b;
            }
            else{
                f = a;
                e = b;
            }
        }
        Console.WriteLine(f);
        Console.WriteLine(e);
        Console.WriteLine(d);
        Console.WriteLine();
        Console.WriteLine(a);
        Console.WriteLine(b);
        Console.WriteLine(c);
    }
}
