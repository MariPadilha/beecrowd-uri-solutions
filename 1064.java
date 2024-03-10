import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        double m = 0;
        int s = 0;
        for(int c = 1; c < 7; c++) {
                double p = input.nextDouble();
                if(p > 0) {
                        s += 1;
                        m += p;
                }
        }
        System.out.println(s+" valores positivos");
        System.out.printf("%.1f%n", m/s);
}
}
