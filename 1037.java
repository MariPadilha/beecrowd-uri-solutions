import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        double n = input.nextDouble();
        if(n >= 0 && n <= 25) {
                System.out.println("Intervalo [0,25]");
        }
        if(n > 25 && n <= 50) {
                System.out.println("Intervalo (25,50]");
        }
        if(n > 50 && n <= 75) {
                System.out.println("Intervalo (50,75]");
        }
        if(n > 75 && n <= 100) {
                System.out.println("Intervalo (75,100]");
        }
        if(n < 0 || n > 100) {
                System.out.println("Fora de intervalo");
        }
}
}
