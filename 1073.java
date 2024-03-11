import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        if(n % 2 != 0) {
                for(int i = 2; i < n; i+=2) {
                        int h = (int)Math.pow(i, 2);
                        System.out.printf("%d^2 = %d%n", i, h);
                }
        }
        if(n % 2 == 0) {
                for(int i = 2; i < n+1; i+=2) {
                        int h = (int)Math.pow(i, 2);
                        System.out.printf("%d^2 = %d%n", i, h);
                }
        }
}
}
