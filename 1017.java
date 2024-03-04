import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args){
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        double n1 = input.nextDouble(); double n2 = input.nextDouble();
        System.out.printf("%.3f%n", n1 * n2 / 12);
        }
}
