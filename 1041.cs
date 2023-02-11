using System;
class URI {
    static void Main(string[] args) { 
        String [] X = Console.ReadLine().Split(' ');
        double n1 = double.Parse(X[0]);
        double n2 = double.Parse(X[1]);
        if(n1 > 0 && n2 > 0){
            Console.WriteLine("Q1");
        }
        if(n1 < 0 && n2 > 0){
            Console.WriteLine("Q2");
        }
        if(n1 < 0 && n2 < 0){
            Console.WriteLine("Q3");
        }
        if(n1 > 0 && n2 < 0){
            Console.WriteLine("Q4");
        }
        if(n1 == 0 && n2 != 0){
            Console.WriteLine("Eixo Y");
        }
        if(n1 != 0 && n2 == 0){
            Console.WriteLine("Eixo X");
        }
        if(n1 == 0 && n2 == 0){
            Console.WriteLine("Origem");
        }    
    }
}
