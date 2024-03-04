import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args){
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        int cod1 = input.nextInt(); int qtde1 = input.nextInt(); double valor1 = input.nextDouble();
        int cod2 = input.nextInt(); int qtde2 = input.nextInt(); double valor2 = input.nextDouble();
        double total = (qtde1 * valor1) + (qtde2 * valor2);
        System.out.printf("VALOR A PAGAR: R$ %.2f%n", total);
        }
}
