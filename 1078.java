import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for(int a = 1; a < 11; a++) {
                System.out.printf("%d x %d = %d", a, n, n*a);
        }
}
}
