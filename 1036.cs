using System;
using System.Globalization;
class URI {
    static void Main(string[] args) { 
        double A, B, C, delta, quadra, x1, x2;
        String[] x = Console.ReadLine().Split(' ');
        A = double.Parse(x[0]); B = double.Parse(x[1]); C = double.Parse(x[2]);
        if(A == 0){
            Console.WriteLine("Impossivel calcular");
        }
        if(A > 0){
            delta = Math.Pow(B,2)-4*A*C;
            if(delta < 0){
                Console.WriteLine("Impossivel calcular");
            }
            else if(delta > 0){
                quadra = Math.Pow(delta, 0.5);
                x1 = (-B + quadra) / (2 * A);
                if(x1 == 0){
                    Console.Write("Impossivel calcular\n");
                }
                else{
                    Console.Write($"R1 = {x1:F5}\n");
                }
                x2 = (-B - quadra) / (2 * A);
                if(x2 == 0){
                    Console.Write("Impossivel calcular\n");
                }
                else{
                    Console.Write($"R2 = {x2:F5}\n");
                }
            }
        }
    }
}
