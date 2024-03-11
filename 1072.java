import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int dentro = 0, fora = 0;
        for(int i = 0; i < n; i++) {
                int l = input.nextInt();
                if(l >= 10 && l <= 20) {
                        dentro += 1;
                }
                else {
                        fora += 1;
                }
        }
        System.out.println(dentro+" in");
        System.out.println(fora+" out");
}
}
