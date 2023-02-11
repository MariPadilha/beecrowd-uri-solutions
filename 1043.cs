using System;
class URI {
    static void Main(string[] args) { 
        String [] x = Console.ReadLine().Split(' ');
        double n1 = double.Parse(x[0]);
        double n2 = double.Parse(x[1]);
        double n3 = double.Parse(x[2]);
        if(n1 < n2 + n3 && n2 < n1 + n3 && n3 < n1 + n2){
            double perimetro = n1 + n2 + n3;
            Console.WriteLine($"Perimetro = {perimetro:F1}");
        }
        else{
            double area = (n1 + n2) * n3 / 2;
            Console.WriteLine($"Area = {area:F1}");
        }
    }
}
