import java.util.Scanner;
import java.util.Locale;
public class Main {
public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for(int i = 0; i < n; i++){
                int a = input.nextInt(); int b = input.nextInt();
                if(b == 0){
                        System.out.println("divisao impossivel");
                }
                else{
                        double f = (double)a/b;
                        System.out.printf("%.1f%n", f);
                }
        }
}
}
