import java.util.Scanner;
public class Main {
        public static void main(String[] args) {
                Scanner input = new Scanner(System.in);
                double nota1 = Double.parseDouble(input.nextLine());
                double nota2 = Double.parseDouble(input.nextLine());
                double nota3 = Double.parseDouble(input.nextLine());
                double soma = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;
                System.out.println(String.format("MEDIA = %.1f", soma).replace(',','.'));
        }
}
