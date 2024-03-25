import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while(true) {
                int n = input.nextInt();
                int soma = 0;
                if(n == 0) {
                        break;
                }
                for(int i = n; i < n+10; i++) {
                        if(i % 2 == 0) {
                                soma += i;
                        }
                }
                System.out.println(soma);
        }
}
}
