import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int h0 = input.nextInt(), m0 = input.nextInt(), hf = input.nextInt(), mf = input.nextInt();
        int horatotal= hf - h0, minutototal = mf - m0;
        if(minutototal < 0) {
                minutototal += 60;
                horatotal -= 1;
        }
        if(horatotal < 0) {
                horatotal += 24;
        }
        else if(h0 == hf && hf == mf && mf == m0) {
                horatotal = 24;
                minutototal = 0;
        }
        System.out.printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)%n", horatotal, minutototal);
}
}
