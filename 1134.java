import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int alcool = 0, gasolina = 0, diesel = 0;
        while(true) {
                int n = input.nextInt();
                if(n == 4) {
                        break;
                }
                if(n == 3) {
                        diesel += 1;
                }
                if(n == 2) {
                        gasolina += 1;
                }
                if(n == 1) {
                        alcool += 1;
                }
        }
        System.out.println("MUITO OBRIGADO");
        System.out.println("Alcool: "+alcool);
        System.out.println("Gasolina: "+gasolina);
        System.out.println("Diesel: "+diesel);
}
}
