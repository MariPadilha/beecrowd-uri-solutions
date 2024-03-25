import java.util.Locale;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Locale.setDefault(Locale.US);
        double soma = 1, n = 2;
        for(int i = 3; i < 40; i++) {
                if(i % 2 != 0) {
                        soma += i / n;
                        n+=n;
                }
        }
        System.out.printf("%.2f%n",soma);
}
}
