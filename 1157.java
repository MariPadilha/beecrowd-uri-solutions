import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for(int i = 0; i < n+1; i++) {
                if(i != 0 && n % i == 0) {
                        System.out.println(i);
                }
        }
}
}
