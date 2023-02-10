using System;
class URI {
    static void Main(string[] args) { 
        double n1, n2, n3, n4, media, exame, nota;
        String [] X = Console.ReadLine().Split(' ');
        n1 = double.Parse(X[0]);
        n2 = double.Parse(X[1]);
        n3 = double.Parse(X[2]);
        n4 = double.Parse(X[3]);
        media = ((n1*2.0) + (n2*3.0) + (n3*4.0) + (n4*1.0))/10.0;
        media = Math.Truncate(10 * media) / 10;
        if(media >= 7){
            Console.WriteLine($"Media: {media:F1}\nAluno aprovado.");
        }
        if(media < 5){
            Console.WriteLine($"Media: {media:F1}\nAluno reprovado.");
        }
        if(5.0 <= media && media <= 6.9){
            exame = double.Parse(Console.ReadLine());
            Console.WriteLine($"Media: {media:F1}\nAluno em exame.\nNota do exame: {exame:F1}");
            nota = (media+exame)/2.0;
            if(nota >= 5)
                Console.WriteLine($"Aluno aprovado.\nMedia final: {nota:F1}");
            else{
                Console.WriteLine($"Aluno reprovado.\nMedia final: {nota:F1}");
            }
        }
    }
}
