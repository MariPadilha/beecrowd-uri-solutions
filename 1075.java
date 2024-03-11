import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        for(int i = 1; i < 10001; i++) {
                if(i % a == 2) {
                        System.out.println(i);
                }
        }
}
}
