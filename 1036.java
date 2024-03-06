import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        double a = input.nextDouble();
        double b = input.nextDouble();
        double c = input.nextDouble();
        if(a == 0) {
                System.out.println("Impossivel calcular");
        }
        if(a > 0) {
                double delta = Math.pow(b, 2) - 4 * a * c;
                if (delta < 0) {
                        System.out.println("Impossivel calcular");
                } else if (delta > 0) {
                        double quadra = Math.sqrt(delta);
                        double x1 = (-b + quadra) / (2 * a);
                        if (x1 == 0) {
                                System.out.println("Impossivel calcular");
                        } else {
                                System.out.printf("R1 = %.5f%n", x1);
                        }
                        double x2 = (-b - quadra) / (2 * a);
                        if (x2 == 0) {
                                System.out.println("Impossivel calcular");
                        } else {
                                System.out.printf("R2 = %.5f%n", x2);
                        }
                }
        }
}
}
