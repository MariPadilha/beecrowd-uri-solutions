import java.util.Scanner;
public class Main {
public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt();
        int ano = n1 / 365;
        n1 = n1 - ano * 365;
        int mes = n1 / 30;
        n1 = (n1 - mes * 30);
        System.out.printf("%d ano(s)%n", ano);
        System.out.printf("%d mes(es)%n", mes);
        System.out.printf("%d dia(s)%n", n1);
        }
}
