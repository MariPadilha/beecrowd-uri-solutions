import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args){
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        double distancia = input.nextDouble();
        double combustivel = input.nextDouble();
        double consumo = distancia / combustivel;
        System.out.printf("%.3f km/l%n", consumo);
        }
}
