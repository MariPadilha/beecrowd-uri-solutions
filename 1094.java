import java.util.Locale;
import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), f = 0, numero;
        int ratos = 0, coelho = 0, sapo = 0;
        for(int i = 0; i < n; i++) {
                numero = input.nextInt();
                String classi = input.next();
                f += numero;
                if(classi.equals("R")) {
                        ratos += numero;
                }
                if(classi.equals("C")) {
                        coelho += numero;
                }
                if(classi.equals("S")) {
                        sapo += numero;
                }
        }
        double porcentR = (ratos * 100.0)/f;
        double porcentC = (coelho * 100.0)/f;
        double porcentS = (sapo * 100.0)/f;
        System.out.printf("Total: %d cobaias", f);
        System.out.print("\n");
        System.out.printf("Total de coelhos: %d", coelho);
        System.out.print("\n");
        System.out.printf("Total de ratos: %d", ratos);
        System.out.print("\n");
        System.out.printf("Total de sapos: %d", sapo);
        System.out.print("\n");
        System.out.printf("Percentual de coelhos: %.2f ", porcentC);
        System.out.print("%\n");
        System.out.printf("Percentual de ratos: %.2f ", porcentR);
        System.out.print("%\n");
        System.out.printf("Percentual de sapos: %.2f ", porcentS);
        System.out.print("%\n");
}
}






