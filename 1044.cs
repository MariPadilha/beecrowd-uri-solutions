using System;
class URI {
    static void Main(string[] args) { 
        String [] x = Console.ReadLine().Split(' ');
        int n1 = int.Parse(x[0]);
        int n2 = int.Parse(x[1]);
        if(n1 % n2 == 0 || n2 % n1 == 0){
            Console.WriteLine("Sao Multiplos");
        }
        else{
            Console.WriteLine("Nao sao Multiplos");
        }
    }
}
