import java.util.Scanner;
public class Main {
        public static void main(String[] args) {
                Scanner input = new Scanner(System.in);
                double nota1 = Double.parseDouble(input.nextLine());
                double nota2 = Double.parseDouble(input.nextLine());
                double media = ((nota1 * 3.5) + (nota2 * 7.5)) / 11;
                System.out.println(String.format("MEDIA = %.5f", media).replace(',','.'));
        }
}
