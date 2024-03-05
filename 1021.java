import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args){
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        double n1 = input.nextDouble();
        double n = n1;
        int valor100 = (int)n / 100;
        n = n - valor100*100;
        int valor50 = (int)n / 50;
        n = n - valor50*50;
        int valor20 = (int)n / 20;
        n = n - valor20*20;
        int valor10 = (int)n / 10;
        n = n - valor10*10;
        int valor5 = (int)n / 5;
        n = n - valor5*5;
        int valor2 = (int)n / 2;
        n = n - valor2*2;
        int valor1 = (int)n / 1;
        n = n - valor1*1;
        int valor050 = (int)(n / 0.50);
        n = n - valor050*0.50;
        int valor025 = (int)(n / 0.25);
        n = n - valor025*0.25;
        int valor010 = (int)(n / 0.10);
        n = n - valor010*0.10;
        int valor05 = (int)(n / 0.05);
        n = n - valor05*0.05;
        System.out.println("NOTAS:");
        System.out.println(valor100 + " nota(s) de R$ 100.00");
        System.out.println(valor50 + " nota(s) de R$ 50.00");
        System.out.println(valor20 + " nota(s) de R$ 20.00");
        System.out.println(valor10 + " nota(s) de R$ 10.00");
        System.out.println(valor5 + " nota(s) de R$ 5.00");
        System.out.println(valor2 + " nota(s) de R$ 2.00");
        System.out.println("MOEDAS:");
        System.out.println(valor1 + " moeda(s) de R$ 1.00");
        System.out.println(valor050 + " moeda(s) de R$ 0.50");
        System.out.println(valor025 + " moeda(s) de R$ 0.25");
        System.out.println(valor010 + " moeda(s) de R$ 0.10");
        System.out.println(valor05 + " moeda(s) de R$ 0.05");
        System.out.printf("%.0f moeda(s) de R$ 0.01%n", n*100);
        }
}
