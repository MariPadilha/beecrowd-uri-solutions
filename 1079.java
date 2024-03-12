import java.util.Locale;
import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for(int i = 0; i < n; i++) {
                double a = input.nextDouble();
                double b = input.nextDouble();
                double c = input.nextDouble();
                double media = ((2.0 * a) + (3.0 * b) + (5.0 * c))/10.0;
                System.out.printf("%.1f%n", media);
        }
}
}
