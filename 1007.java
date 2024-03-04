import java.util.Scanner;
public class Main {
        public static void main(String[] args) {
                Scanner input = new Scanner(System.in);
                int diferenca = (input.nextInt() * input.nextInt()) - (input.nextInt() * input.nextInt());
                System.out.println("DIFERENCA = " + diferenca);
        }
}
