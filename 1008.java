import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args){
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        int funcionarios = input.nextInt();
        int horas = input.nextInt();
        double valorPorHora = input.nextDouble();
        double salario = horas * valorPorHora;
        System.out.println("NUMBER = " + funcionarios);
        System.out.printf("SALARY = U$ %.2f%n" , salario);
        }
}
