import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        int s = 0;
        for(int c = 1; c < 6; c++) {
                int h = input.nextInt();
                if((h % 2) == 0) {
                        s += 1;
                }
        }
        System.out.println(s+" valores pares");
}
}
