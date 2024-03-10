import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        int par = 0, impar = 0, positivo = 0, negativo = 0;
        for(int c = 1; c < 6; c++) {
                int ca = input.nextInt();
                if(ca % 2 == 0) {
                        par += 1;
                }
                else{
                        impar += 1;
                }
                if(ca > 0) {
                        positivo += 1;
                }
                else if(ca != 0) {
                        negativo += 1;
                }
        }
        System.out.println(par+" valor(es) par(es)");
        System.out.println(impar+" valor(es) impar(es)");
        System.out.println(positivo+" valor(es) positivo(s)");
        System.out.println(negativo+" valor(es) negativo(s)");
}
}
