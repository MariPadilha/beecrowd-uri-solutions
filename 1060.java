import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        int s = 0;
        for(int n1 = 1; n1 < 7; n1++) {
                double a = input.nextDouble();
                if(a > 0) {
                        s += 1;
                }
        }
        System.out.println(s + " valores positivos");
}
}
