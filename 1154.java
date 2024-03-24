import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Locale.setDefault(Locale.US);
        double vezes = 0, lista = 0;
        while(true) {
                double a = input.nextInt();
                if(a < 0) {
                        break;
                }
                lista += a;
                vezes += 1;
        }
        double c = (double)(lista / vezes);
        System.out.printf("%.2f%n",c);
}
}
