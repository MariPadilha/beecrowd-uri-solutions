import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        int a, b, c, d = 0, e = 0, f = 0;
        a = input.nextInt();
        b = input.nextInt();
        c = input.nextInt();
        if(a > b && a > c) {
                d = a;
                if(b > c) {
                        e = b;
                        f = c;
                }
                else {
                        e = c;
                        f = b;
                }
        }
        if(b > a && b > c) {
                d = b;
                if(a > c) {
                        e = a;
                        f = c;
                }
                else {
                        e = c;
                        f = a;
                }
        }
        if(c > a && c > b) {
                d = c;
                if(a > b) {
                        e = a;
                        f = b;
                }
                else {
                        f = a;
                        e = b;
                }
        }
        System.out.println(f);
        System.out.println(e);
        System.out.println(d);
        System.out.println();
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        }
}
