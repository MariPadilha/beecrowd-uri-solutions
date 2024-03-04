import java.util.Scanner;
public class Main {
        public static void main(String[] args) {
                Scanner input = new Scanner(System.in);
                double raio = Double.parseDouble(input.nextLine());
                double area = (raio * raio) * 3.14159;
                System.out.println(String.format("A=%.4f", area).replace(",", "."));
        }
}
