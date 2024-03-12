import java.util.Arrays;
import java.util.Locale;
import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        int maior = 0, posicao = 0;
        for(int i = 0; i < 100; i++){
                int n = input.nextInt();
                if(n > maior){
                        maior = n;
                        posicao = i;
                }
        }
        System.out.println(maior+"\n"+(posicao+1));
}
}
