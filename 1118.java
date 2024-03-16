import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        int vezes = 0; double media = 0; boolean continuar = true;
        while(continuar) {
                double n = input.nextDouble();
                if(n >= 0 && n <= 10){
                        vezes += 1;
                        media += n;
                }
                else{
                        System.out.println("nota invalida");
                }
                if(vezes == 2) {
                        vezes = 0;
                        System.out.printf("media = %.2f%n", media / 2.0);
                        media = 0;
                        while (true) {
                                System.out.println("novo calculo (1-sim 2-nao)");
                                int j = input.nextInt();
                                if (j == 1) {
                                        break;
                                } else if (j == 2) {
                                        continuar = false;
                                        break;
                                }
                        }
                }

        }
}
}
