import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args){
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        double x1 = input.nextDouble(); double y1 = input.nextDouble();
        double x2 = input.nextDouble(); double y2 = input.nextDouble();
        double t = Math.pow((x2 - x1), 2.0) + Math.pow((y2 - y1),2.0);
        double r = Math.sqrt(t);
        System.out.printf("%.4f%n", r);
        }
}
