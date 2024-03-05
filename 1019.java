import java.util.Scanner;
public class Main {
public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt();
        int hora = n1 / 3600;
        n1 = n1 - hora*3600;
        int minutos = n1 / 60;
        n1 = (n1 - minutos * 60);
        System.out.printf("%d:%d:%d%n", hora, minutos, n1);
        }
}
