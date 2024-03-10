import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int h0 = input.nextInt();
        int hf = input.nextInt();
        int horatotal = hf - h0;
        if(horatotal < 0) {
                horatotal += 24;
        }
        else if(h0 == hf) {
                horatotal = 24;
        }
        System.out.printf("O JOGO DUROU %d HORA(S)%n", horatotal);
}
}
