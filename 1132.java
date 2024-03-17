import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt(), b = input.nextInt(), total = 0;
        for(int i = Math.min(a,b); i < Math.max(a,b)+1; i++) {
                if(i % 13 != 0) {
                        total += i;
                }
        }
        System.out.println(total);
}
}
