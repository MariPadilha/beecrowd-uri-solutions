using System; 
class URI {
    static void Main(string[] args) { 
        double raio = double.Parse(Console.ReadLine());
        double area = (raio * raio) * 3.14159;
        Console.WriteLine($"A={area:F4}");

    }

}
