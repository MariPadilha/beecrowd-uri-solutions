import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int b = input.nextInt(), vezes = 0;
        while(vezes != 6) {
                if(b % 2 != 0) {
                        System.out.println(b);
                        vezes += 1;
                }
                b += 1;
        }
}
}
