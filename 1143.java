import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        for(int i = 1; i < a+1; i++) {
                int b = (int) Math.pow(i,2);
                int c = b * i;
                System.out.println(i + " " + b + " " + c);
        }
}
}
