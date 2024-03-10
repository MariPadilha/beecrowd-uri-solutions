import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int b = input.nextInt();
        for(int c = 1; c < b+1; c++) {
                if(c % 2 != 0) {
                        System.out.println(c);
                }
        }
}
}
