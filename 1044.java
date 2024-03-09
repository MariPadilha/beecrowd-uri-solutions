import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt();
        int n2 = input.nextInt();
        if (n1 % n2 == 0 || n2 % n1 == 0) {
                System.out.println("Sao Multiplos");
        } else {
                System.out.println("Nao sao Multiplos");
        }
}
}
