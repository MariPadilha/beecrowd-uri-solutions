import java.util.Scanner;
public class Main {
public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int a = input.nextInt(); int b = input.nextInt(); int c = input.nextInt();
        int maior = (a + b + Math.abs(a - b)) / 2;
        int resultado = (maior + c + Math.abs(maior - c)) / 2;
        System.out.println(resultado + " eh o maior");
        }
}
