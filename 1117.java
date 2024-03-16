import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        int vezes = 0; double media = 0;
        while(true) {
                double n = input.nextDouble();
                if(vezes == 2) {
                        break;
                }
                if(n >= 0 && n <=10) {
                        vezes += 1;
                        media += n;
                }
                else{
                        System.out.println("nota invalida");
                }
        }
        media = media / 2.0;
        System.out.printf("media = %.2f%n", media);
}
}
