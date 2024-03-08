import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        double n1 = input.nextDouble();
        double n2 = input.nextDouble();
        if(n1 > 0 && n2 > 0) {
                System.out.println("Q1");
        }
        if(n1 < 0 && n2 > 0) {
                System.out.println("Q2");
        }
        if(n1 < 0 && n2 < 0) {
                System.out.println("Q3");
        }
        if(n1 > 0 && n2 < 0) {
                System.out.println("Q4");
        }
        if(n1 == 0 && n2 != 0) {
                System.out.println("Eixo Y");
        }
        if(n1 != 0 && n2 == 0){
                System.out.println("Eixo X");
        }
        if(n1 == 0 && n2 == 0) {
                System.out.println("Origem");
        }
        }
}
