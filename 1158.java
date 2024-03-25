import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for(int i = 0; i < n; i++) {
                int soma = 0;
                int x = input.nextInt(), y = input.nextInt();
                for(int m = x; m < x + y * 2; m++) {
                        if(m % 2 != 0) {
                                soma += m;
                        }
                }
                System.out.println(soma);
        }
}
}
