import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt(), b = input.nextInt(), vezes = 0;
        int lista[] = new int[Math.max(a, b)-Math.min(a, b)];
        for(int i = Math.min(a,b)+1; i < Math.max(a,b); i++) {
                if(i % 5 == 2 || i % 5 == 3) {
                        lista[vezes] = i;
                        vezes++;
                }
        }
        for(int j = 0; j < vezes; j++){
                System.out.println(lista[j]);
        }

}
}
