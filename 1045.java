import java.util.Scanner;
import java.util.Arrays;
import java.util.Locale;
public class Main {
public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        double [] lista = new double[3]; double a, b, c;
        lista[0] = input.nextDouble(); lista[1] = input.nextDouble(); lista[2] = input.nextDouble();
        Arrays.sort(lista); a = lista[2]; b = lista[1]; c = lista[0];
        int sinal = 0;
        double n = Math.pow(b,2) + Math.pow(c,2);
        if(a >= b+c) {
                System.out.println("NAO FORMA TRIANGULO");
                sinal = 1;
        }
        if(Math.pow(a,2) == n && sinal == 0) {
                System.out.println("TRIANGULO RETANGULO");
        }
        if(Math.pow(a,2) > n && sinal == 0) {
                System.out.println("TRIANGULO OBTUSANGULO");
        }
        if(Math.pow(a,2) < n && sinal == 0) {
                System.out.println("TRIANGULO ACUTANGULO");
        }
        if(a == b && b == c && sinal == 0) {
                System.out.println("TRIANGULO EQUILATERO");
        }
        if(a == b && b!= c || a == c && c !=b || b == c && c !=a && sinal == 0) {
                System.out.println("TRIANGULO ISOSCELES");
        }
}
}
