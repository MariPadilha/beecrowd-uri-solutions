import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        for(int i = 0; i < N; i++) {
                int o = input.nextInt();
                if(o < 0) {
                        if(o % 2 != 0) {
                                System.out.println("ODD NEGATIVE");
                        }
                        if(o % 2 == 0) {
                                System.out.println("EVEN NEGATIVE");
                        }
                }
                if(o == 0) {
                        System.out.println("NULL");
                }
                if(o > 0) {
                        if(o % 2 != 0) {
                                System.out.println("ODD POSITIVE");
                        }
                        if(o % 2 == 0) {
                                System.out.println("EVEN POSITIVE");
                        }
                }
        }
}
}
