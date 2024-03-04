import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args){
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        double raio = input.nextDouble();
        double volume = 4.0 * 3.14159 * (raio* raio * raio) / 3.0;
        System.out.printf("VOLUME = %.3f%n", volume);
}
}
