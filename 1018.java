import java.util.Scanner;
public class Main {
public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt();
        int n = n1;
        int valor100 = n / 100;
        n = n - valor100*100;
        int valor50 = n / 50;
        n = n - valor50*50;
        int valor20 = n / 20;
        n = n - valor20*20;
        int valor10 = n / 10;
        n = n - valor10*10;
        int valor5 = n / 5;
        n = n - valor5*5;
        int valor2 = n / 2;
        n = n - valor2*2;
        int valor1 = n / 1;
        System.out.println(n1);
        System.out.println(valor100 + " nota(s) de R$ 100,00");
        System.out.println(valor50 + " nota(s) de R$ 50,00");
        System.out.println(valor20 + " nota(s) de R$ 20,00");
        System.out.println(valor10 + " nota(s) de R$ 10,00");
        System.out.println(valor5 + " nota(s) de R$ 5,00");
        System.out.println(valor2 + " nota(s) de R$ 2,00");
        System.out.println(valor1 + " nota(s) de R$ 1,00");
        }
}
