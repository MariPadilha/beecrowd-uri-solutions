import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double a = input.nextInt();
        double b = input.nextInt();
        if(a == 1.0) {
                a = 4.0;
        }
        else if(a == 2.0) {
                a = 4.5;
        }
        else if(a == 3.0) {
                a = 5.0;
        }
        else if(a == 4.0) {
                a = 2.0;
        }
        else if(a == 5.0) {
                a = 1.5;
        }
        System.out.printf("Total: R$ %.2f%n", a*b);
}
}
