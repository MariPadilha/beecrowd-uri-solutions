import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        double salario = input.nextDouble(), percent, reajuste;
        if(salario < 400.01){
                percent = salario * (15.0/100.0);
                reajuste = salario + percent;
                System.out.printf("Novo salario: %.2f%n", reajuste);
                System.out.printf("Reajuste ganho: %.2f%n", percent);
                System.out.println("Em percentual: 15 %");
        }
        else if(salario < 800.01){
                percent = salario * (12.0/100.0);
                reajuste = salario + percent;
                System.out.printf("Novo salario: %.2f%n", reajuste);
                System.out.printf("Reajuste ganho: %.2f%n", percent);
                System.out.println("Em percentual: 12 %");
        }
        else if(salario < 1200.01){
                percent = salario * (10.0/100.0);
                reajuste = salario + percent;
                System.out.printf("Novo salario: %.2f%n", reajuste);
                System.out.printf("Reajuste ganho: %.2f%n", percent);
                System.out.println("Em percentual: 10 %");
        }
        else if(salario <= 2000){
                percent = salario * (7.0/100.0);
                reajuste = salario + percent;
                System.out.printf("Novo salario: %.2f%n", reajuste);
                System.out.printf("Reajuste ganho: %.2f%n", percent);
                System.out.println("Em percentual: 7 %");
        }
        else if(salario > 2000){
                percent = salario * (4.0/100.0);
                reajuste = salario + percent;
                System.out.printf("Novo salario: %.2f%n", reajuste);
                System.out.printf("Reajuste ganho: %.2f%n", percent);
                System.out.println("Em percentual: 4 %");
        }
}
}
