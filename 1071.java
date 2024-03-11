import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt(), y = input.nextInt();
        int maior = Math.max(x, y);
        int menor = Math.min(y, x);
        menor += 1;
        int soma = 0;
        while (menor < maior) {
                if (menor % 2 != 0) {
                        soma += menor;
                }
                menor += 1;
        }
        System.out.println(soma);
}
}
