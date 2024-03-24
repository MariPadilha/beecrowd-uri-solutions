import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt();
        int n2 = n1;
        while(n1 != 1) {
                n1 -= 1;
                n2 += n2 * (n1 - 1);
        }
        System.out.println(n2);
}
}
