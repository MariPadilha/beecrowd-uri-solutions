import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args){
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        String nome = input.nextLine();
        double salfixo = input.nextDouble();
        double qtdevendas = input.nextDouble();
        double bonus = qtdevendas * (15.0/100.0);
        double total = salfixo + bonus;
        System.out.printf("TOTAL = R$ %.2f%n", total);
        }
}
