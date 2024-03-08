import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        float n1 = input.nextFloat();
        float n2 = input.nextFloat();
        float n3 = input.nextFloat();
        float n4 = input.nextFloat();
        float media = (float)(((n1*2.0) + (n2*3.0) + (n3*4.0) + (n4*1.0))/10.0);
        if(media >= 7){
                System.out.printf("Media: %.1f%n", media);
                System.out.println("Aluno aprovado.");
        }
        if(media < 5){
                System.out.printf("Media: %.1f%n", media);
                System.out.println("Aluno reprovado.");
        }
        if(5 <= media && media <= 6.9){
                double exame = input.nextDouble();
                System.out.printf("Media: %.1f%n", media);
                System.out.println("Aluno em exame.");
                System.out.printf("Nota do exame: %.1f%n", exame);
                double nota = (media+exame)/2.0;
                if(nota >= 5){
                        System.out.println("Aluno aprovado.");
                        System.out.printf("Media final: %.1f%n", nota);
                }
                else{
                        System.out.println("Aluno reprovado.");
                        System.out.printf("Media final: %.1f%n", nota);
                }
        }
        }
}
