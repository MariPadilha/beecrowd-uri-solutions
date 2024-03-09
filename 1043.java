import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        double n1 = input.nextDouble();
        double n2 = input.nextDouble();
        double n3 = input.nextDouble();
        if(n1 < n2 + n3 && n2 < n1 + n3 && n3 < n1 + n2){
                double perimetro = n1 + n2 + n3;
                System.out.printf("Perimetro = %.1f%n", perimetro);
        }
        else{
                double area = (n1 + n2) * n3 / 2.0;
                System.out.printf("Area = %.1f%n",area);
        }
}
}
